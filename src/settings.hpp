#pragma once

#include <Geode/platform/cplatform.h>
class SettingsManager {
public:
	static SettingsManager* get();
	void init();

	#ifdef GEODE_IS_DESKTOP
	bool autoHideMenu;
	bool autoShowMenu;
	bool altDisablesZoom;
	float zoomSensitivity;
	#endif
};
