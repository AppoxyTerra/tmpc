#version 330

// Input vertex attributes (from vertex shader)
in vec2 fragTexCoord;
in vec4 fragColor;

// Input uniform values
uniform sampler2D texture0;
uniform vec4 colDiffuse;

// Output fragment color
out vec4 finalColor;

// NOTE: Add here your custom variables

void main()
{
    // Texel color fetching from texture sampler
	vec2 uv = fragTexCoord;
    vec3 color = texture(texture0, uv).xyz;



    finalColor = vec4(color, 1.0)*colDiffuse;
}