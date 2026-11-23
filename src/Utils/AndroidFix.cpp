#include <Geode/Geode.hpp>

#if defined(GEODE_IS_ANDROID)
extern "C" {
    // Android dynamic linker missing symbol fix for LevelEditorLayer
    __attribute__((visibility("default"))) void _ZThn13992_N16LevelEditorLayer20levelSettingsUpdatedEv(void*) {}
    __attribute__((visibility("default"))) void _ZN16LevelEditorLayer20levelSettingsUpdatedEv(void*) {}
}
#endif
