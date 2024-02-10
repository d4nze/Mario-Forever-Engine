#include "MainMenuBar.hpp"
#include <imgui.h>
#include "../Engine.hpp"

Engine::MainMenuBar::MainMenuBar(Engine* engine)
: EngineObject(engine) {}

void Engine::MainMenuBar::show()
{
    if (ImGui::BeginMainMenuBar())
    {
        showWindows();
        showSetting();
        ImGui::EndMainMenuBar();
    }
}

void Engine::MainMenuBar::showWindows()
{
    if (ImGui::BeginMenu("Windows"))
    {
        if (ImGui::MenuItem("Object hierarchy", nullptr, m_engine->isObjectHierarchyOpen()))
        {
            m_engine->openObjectHierarchy();
        }
        if (ImGui::MenuItem("Object editor", nullptr, m_engine->isObjectEditorOpen()))
        {
            m_engine->openObjectEditor();
        }
        if (ImGui::MenuItem("Inspector", nullptr, m_engine->isInspectorOpen()))
        {
            m_engine->openInspector();
        }
        ImGui::EndMenu();
    }
}

void Engine::MainMenuBar::showSetting()
{
    if (ImGui::BeginMenu("Settings"))
    {
        static bool fullscreen = false;
        if (ImGui::MenuItem("Fullscreen", nullptr, fullscreen))
        {
            fullscreen = !fullscreen;
            m_engine->toggleFullscreen(fullscreen);
        }
        m_themeManager.show();
        ImGui::EndMenu();
    }
}
