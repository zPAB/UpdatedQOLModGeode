#include <Geode/Geode.hpp>

#if defined(GEODE_IS_ANDROID)
extern "C" {
    // Missing symbol fixes for Android dynamic linker (dlopen) in PlayLayer and LevelEditorLayer

    // CCCircleWaveDelegate::circleWaveWillBeRemoved
    __attribute__((visibility("default"))) void _ZThn13992_N9PlayLayer23circleWaveWillBeRemovedEP12CCCircleWave(void*, void*) {}
    __attribute__((visibility("default"))) void _ZThn13996_N9PlayLayer23circleWaveWillBeRemovedEP12CCCircleWave(void*, void*) {}
    __attribute__((visibility("default"))) void _ZThn14000_N9PlayLayer23circleWaveWillBeRemovedEP12CCCircleWave(void*, void*) {}
    __attribute__((visibility("default"))) void _ZN9PlayLayer23circleWaveWillBeRemovedEP12CCCircleWave(void*, void*) {}

    __attribute__((visibility("default"))) void _ZThn13992_N16LevelEditorLayer23circleWaveWillBeRemovedEP12CCCircleWave(void*, void*) {}
    __attribute__((visibility("default"))) void _ZThn13996_N16LevelEditorLayer23circleWaveWillBeRemovedEP12CCCircleWave(void*, void*) {}
    __attribute__((visibility("default"))) void _ZN16LevelEditorLayer23circleWaveWillBeRemovedEP12CCCircleWave(void*, void*) {}

    __attribute__((visibility("default"))) void _ZThn13992_N15GJBaseGameLayer23circleWaveWillBeRemovedEP12CCCircleWave(void*, void*) {}
    __attribute__((visibility("default"))) void _ZN15GJBaseGameLayer23circleWaveWillBeRemovedEP12CCCircleWave(void*, void*) {}

    // CurrencyRewardDelegate::currencyWillExit
    __attribute__((visibility("default"))) void _ZThn14000_N9PlayLayer16currencyWillExitEP19CurrencyRewardLayer(void*, void*) {}
    __attribute__((visibility("default"))) void _ZThn13996_N9PlayLayer16currencyWillExitEP19CurrencyRewardLayer(void*, void*) {}
    __attribute__((visibility("default"))) void _ZThn13992_N9PlayLayer16currencyWillExitEP19CurrencyRewardLayer(void*, void*) {}
    __attribute__((visibility("default"))) void _ZThn14004_N9PlayLayer16currencyWillExitEP19CurrencyRewardLayer(void*, void*) {}
    __attribute__((visibility("default"))) void _ZThn14008_N9PlayLayer16currencyWillExitEP19CurrencyRewardLayer(void*, void*) {}
    __attribute__((visibility("default"))) void _ZN9PlayLayer16currencyWillExitEP19CurrencyRewardLayer(void*, void*) {}

    __attribute__((visibility("default"))) void _ZThn14000_N16LevelEditorLayer16currencyWillExitEP19CurrencyRewardLayer(void*, void*) {}
    __attribute__((visibility("default"))) void _ZThn13996_N16LevelEditorLayer16currencyWillExitEP19CurrencyRewardLayer(void*, void*) {}
    __attribute__((visibility("default"))) void _ZThn13992_N16LevelEditorLayer16currencyWillExitEP19CurrencyRewardLayer(void*, void*) {}
    __attribute__((visibility("default"))) void _ZN16LevelEditorLayer16currencyWillExitEP19CurrencyRewardLayer(void*, void*) {}

    __attribute__((visibility("default"))) void _ZThn14000_N15GJBaseGameLayer16currencyWillExitEP19CurrencyRewardLayer(void*, void*) {}
    __attribute__((visibility("default"))) void _ZN15GJBaseGameLayer16currencyWillExitEP19CurrencyRewardLayer(void*, void*) {}

    // DialogDelegate::dialogClosed
    __attribute__((visibility("default"))) void _ZThn13992_N9PlayLayer12dialogClosedEP11DialogLayer(void*, void*) {}
    __attribute__((visibility("default"))) void _ZThn13996_N9PlayLayer12dialogClosedEP11DialogLayer(void*, void*) {}
    __attribute__((visibility("default"))) void _ZThn14000_N9PlayLayer12dialogClosedEP11DialogLayer(void*, void*) {}
    __attribute__((visibility("default"))) void _ZN9PlayLayer12dialogClosedEP11DialogLayer(void*, void*) {}

    __attribute__((visibility("default"))) void _ZThn13992_N16LevelEditorLayer12dialogClosedEP11DialogLayer(void*, void*) {}
    __attribute__((visibility("default"))) void _ZThn13996_N16LevelEditorLayer12dialogClosedEP11DialogLayer(void*, void*) {}
    __attribute__((visibility("default"))) void _ZN16LevelEditorLayer12dialogClosedEP11DialogLayer(void*, void*) {}

    __attribute__((visibility("default"))) void _ZThn13992_N15GJBaseGameLayer12dialogClosedEP11DialogLayer(void*, void*) {}
    __attribute__((visibility("default"))) void _ZN15GJBaseGameLayer12dialogClosedEP11DialogLayer(void*, void*) {}

    // LevelSettingsDelegate::levelSettingsUpdated
    __attribute__((visibility("default"))) void _ZThn13992_N16LevelEditorLayer20levelSettingsUpdatedEv(void*) {}
    __attribute__((visibility("default"))) void _ZThn13996_N16LevelEditorLayer20levelSettingsUpdatedEv(void*) {}
    __attribute__((visibility("default"))) void _ZN16LevelEditorLayer20levelSettingsUpdatedEv(void*) {}

    // GooglePlayDelegate::googlePlaySignedIn
    __attribute__((visibility("default"))) void _ZThn14004_N9PlayLayer18googlePlaySignedInEv(void*) {}
    __attribute__((visibility("default"))) void _ZThn14000_N9PlayLayer18googlePlaySignedInEv(void*) {}
    __attribute__((visibility("default"))) void _ZN9PlayLayer18googlePlaySignedInEv(void*) {}
}
#endif
