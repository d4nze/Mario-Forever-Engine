#include "ThemeManager.hpp"
#include <imgui.h>

Engine::ThemeManager::ThemeManager() : m_theme(Light)
{
    ImGui::StyleColorsLight();
}

void Engine::ThemeManager::show()
{
    if (ImGui::BeginMenu("Theme"))
    {
        if (ImGui::MenuItem("Light", nullptr, m_theme == Light))
        {
            m_theme = Light;
            ImGui::StyleColorsLight();
        }
        if (ImGui::MenuItem("Dark", nullptr, m_theme == Dark))
        {
            m_theme = Dark;
            ImGui::StyleColorsDark();
        }
        if (ImGui::MenuItem("Classic", nullptr, m_theme == Classic))
        {
            m_theme = Classic;
            ImGui::StyleColorsClassic();
        }
        ImGui::EndMenu();
    }
}
