#include "App.hpp"
#include <imgui.h>

int Engine::App::run()
{
    while (m_engine.m_window.isOpen())
    {
        m_engine.m_window.pollEvents();
        ImGui::DockSpaceOverViewport(ImGui::GetMainViewport());
        showUI();
        m_engine.m_window.render();
    }
    return 0;
}

void Engine::App::showUI()
{
    m_engine.m_mainMenuBar.show();
    m_engine.m_objectHierarchy.show();
    m_engine.m_objectEditor.show();
    m_engine.m_inspector.show();
}
