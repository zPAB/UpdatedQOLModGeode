# QOLMod (v6 Port)

An unofficial maintenance port of **QOLMod** (originally created by **TheSillyDoggo**) updated for **Geometry Dash 2.2091** and **Geode v6.0.0-beta.2**.

## Credits & Attribution
- **Original Developer:** [TheSillyDoggo](https://github.com/TheSillyDoggo) - Original mod architecture, modules, and user interface.
- **Port Maintainer:** [zPAB](https://github.com/zPAB) - Modernized build files, bindings, and dependencies for modern Geode v6.

## About this Port
The upstream QOLMod repository has been inactive and does not compile on modern Geode v6 due to breaking changes in bindings, SDK macros, and toolchains. This port provides:
- Updated `CMakeLists.txt` for Geode SDK v6.0.0-beta.2 (`setup_geode_mod`).
- Updated bindings targeting Geometry Dash 2.2091.
- Cleaned up font assets and resolved packaging failures with Geode CLI.
- Multiplatform binary builds for Windows, Android (32 & 64-bit), macOS, and iOS.

## Controls
- **Desktop (Windows / macOS):** Press <cg>Tab</c> to open the menu. Individual keybinds can be assigned per module.
- **Mobile (Android / iOS):** Tap the on-screen floating ball to open the menu.
