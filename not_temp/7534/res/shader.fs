#version 330

// Input vertex attributes (from vertex shader)
in vec2 fragTexCoord;
in vec4 fragColor;

// Input uniform values
uniform sampler2D texture0;
uniform vec4 colDiffuse;

const int anch_count = 16;
uniform vec2 src_anch[anch_count];
uniform vec2 dst_anch[anch_count];

// Output fragment color
out vec4 finalColor;

// NOTE: Add here your custom variables

float dist(vec2 a, vec2 b) {
    return sqrt(pow(a.x - b.x, 2.0) + pow(a.y - b.y, 2.0));
}

float distPointLine(vec2 p, vec2 a, vec2 b) {
    return (
        abs((b.x-a.x)*(a.y-p.y) - (a.x-p.x)*(b.y-a.y))
    ) / dist(a,b);
}

float angleOf(vec2 v) {
    return atan(v.y,v.x);
}


void main()
{
    // Texel color fetching from texture sampler
	vec2 uv = fragTexCoord;
    vec3 color = vec3(0.0);

    vec2 src_uv = vec2(0.0);
    float div = 0.0;

    for (int i = 0; i < anch_count; i+=2) {
        vec2 src_start = src_anch[i];
        vec2 src_end = src_anch[i+1];
        
        vec2 dst_start = dst_anch[i];
        vec2 dst_end = dst_anch[i+1];

        vec2 src_bone_vec_norm = normalize(src_end - src_start);
        vec2 dst_bone_vec_norm = normalize(dst_end - dst_start);

        vec2 current_from_start = uv - dst_start;
        float current_angle = angleOf(src_bone_vec_norm) - angleOf(dst_bone_vec_norm) + angleOf(current_from_start);
        float current_magn = length(current_from_start) / length(dst_end-dst_start) * length(src_end-src_start);

        vec2 current_src = src_start + vec2(current_magn * cos(current_angle), current_magn * sin(current_angle));

        float fac = pow(1.0 / dist(uv, dst_end), 2.0) * 0.000000001;

        // color.x += fac / float(anch_count/2);

        // float alpha = texture(texture0, current_src).w;
        // if (alpha > 0.9) {
        src_uv += current_src * fac;
        div += fac;
        // }
    }
    src_uv /= div;
    if (src_uv.x < 0 || src_uv.x > 1 || src_uv.y < 0 || src_uv.y > 1) {
        color = vec3(0.1, 0.1, 0.1);
    } else {
        color += texture(texture0, src_uv).xyz;
    }
    finalColor = vec4(color, 1.0)*colDiffuse;
}