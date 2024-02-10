#ifndef ENGINE_GUI_THEME_MANAGER_HPP
#define ENGINE_GUI_THEME_MANAGER_HPP

namespace Engine
{
    class ThemeManager
    {
    public:
        ThemeManager();
        ~ThemeManager() = default;

        void show();

        enum Theme
        {
            Light, Dark, Classic
        };
        // void setTheme(Theme theme);
        // Theme getTheme() const;

    private:
        Theme m_theme;
    };
} // Engine

#endif //ENGINE_GUI_THEME_MANAGER_HPP
