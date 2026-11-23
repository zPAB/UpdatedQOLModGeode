#include <Geode/Geode.hpp>

#if defined(GEODE_IS_ANDROID)
extern "C" {
    // Missing symbol fixes for Android dynamic linker (dlopen) in PlayLayer and LevelEditorLayer
    __attribute__((visibility("default"))) void _ZThn13992_N9PlayLayer23circleWaveWillBeRemovedEP12CCCircleWave(void*, void*) {}
    __attribute__((visibility("default"))) void _ZN9PlayLayer23circleWaveWillBeRemovedEP12CCCircleWave(void*, void*) {}

    __attribute__((visibility("default"))) void _ZThn13992_N16LevelEditorLayer20levelSettingsUpdatedEv(void*) {}
    __attribute__((visibility("default"))) void _ZThn13996_N16LevelEditorLayer20levelSettingsUpdatedEv(void*) {}
    __attribute__((visibility("default"))) void _ZN16LevelEditorLayer20levelSettingsUpdatedEv(void*) {}

    __attribute__((visibility("default"))) void _ZThn13992_N9PlayLayer12dialogClosedEP11DialogLayer(void*, void*) {}
    __attribute__((visibility("default"))) void _ZThn13996_N9PlayLayer12dialogClosedEP11DialogLayer(void*, void*) {}
    __attribute__((visibility("default"))) void _ZN9PlayLayer12dialogClosedEP11DialogLayer(void*, void*) {}

    __attribute__((visibility("default"))) void _ZThn13992_N16LevelEditorLayer12dialogClosedEP11DialogLayer(void*, void*) {}
    __attribute__((visibility("default"))) void _ZThn13996_N16LevelEditorLayer12dialogClosedEP11DialogLayer(void*, void*) {}
    __attribute__((visibility("default"))) void _ZN16LevelEditorLayer12dialogClosedEP11DialogLayer(void*, void*) {}

    __attribute__((visibility("default"))) void _ZThn13992_N16LevelEditorLayer23circleWaveWillBeRemovedEP12CCCircleWave(void*, void*) {}
    __attribute__((visibility("default"))) void _ZN16LevelEditorLayer23circleWaveWillBeRemovedEP12CCCircleWave(void*, void*) {}

    __attribute__((visibility("default"))) void _ZThn13992_N15GJBaseGameLayer23circleWaveWillBeRemovedEP12CCCircleWave(void*, void*) {}
    __attribute__((visibility("default"))) void _ZN15GJBaseGameLayer23circleWaveWillBeRemovedEP12CCCircleWave(void*, void*) {}

    __attribute__((visibility("default"))) void _ZThn13992_N15GJBaseGameLayer12dialogClosedEP11DialogLayer(void*, void*) {}
    __attribute__((visibility("default"))) void _ZN15GJBaseGameLayer12dialogClosedEP11DialogLayer(void*, void*) {}
}
#endif
