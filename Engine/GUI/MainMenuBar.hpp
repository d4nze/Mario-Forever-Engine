#ifndef ENGINE_VIEW_MAIN_MENU_BAR_HPP
#define ENGINE_VIEW_MAIN_MENU_BAR_HPP
#include "../Window.hpp"
#include "ThemeManager.hpp"
#include "../EngineObject.hpp"

namespace Engine
{
    class MainMenuBar : public EngineObject
    {
    public:
        explicit MainMenuBar(Engine* engine);
        ~MainMenuBar() = default;

        void show();

    private:
        void showWindows();
        void showSetting();

        ThemeManager m_themeManager;
    };
} // Engine

#endif //ENGINE_VIEW_MAIN_MENU_BAR_HPP
