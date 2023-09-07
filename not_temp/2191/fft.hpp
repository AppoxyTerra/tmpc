

void fft(float* in_wave, float* out_freq, int n) {
	for (int i = 0; i < n; i++)
	{
		out_freq[i] = 0;
		for (int j = 0; j < n; j++)
		{
			out_freq[i] += in_wave[j] * exp(-2.f * PI * j * i * sqrtf(-1.f)/n);
		}
	}
}


