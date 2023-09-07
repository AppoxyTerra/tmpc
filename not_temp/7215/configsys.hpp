#pragma pack(1)

template <class Config_Namespace_Struct>
void loadConfig(Config_Namespace_Struct* config, const char* filename) {
	FILE* f = fopen(filename, "rb");
	if (!f) {
		// Use default config.
		return;
	}
	fread(config, sizeof(Config_Namespace_Struct), 1, f);
	fclose(f);
	TraceLog(LOG_INFO, "Config file %s succesfuly loaded.", filename);
}

template <class Config_Namespace_Struct>
void saveConfig(Config_Namespace_Struct* config, const char* filename) {
	FILE* f = fopen(filename, "wb");
	if (!f) {
		TraceLog(LOG_ERROR, "Failed to write config on file '%s'.", filename);
		return;
	}
	fwrite(config, sizeof(Config_Namespace_Struct), 1, f);
	fclose(f);
	TraceLog(LOG_INFO, "Config file %s succesfuly saved.", filename);
}


struct UIConfig {
	float scale = 100.0f; 
} ui;


