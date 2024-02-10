#include "Engine.hpp"
#include <imgui.h>

Engine::Engine::Engine()
: m_window()
, m_inspector(this)
, m_objectHierarchy(this)
, m_objectEditor(this)
, m_mainMenuBar(this)
{
    ImGuiIO& io = ImGui::GetIO();
    io.ConfigFlags |= ImGuiConfigFlags_DockingEnable;
}

bool Engine::Engine::isInspectorOpen() const
{
    return m_inspector.open;
}

void Engine::Engine::toggleFullscreen(bool fullscreen)
{
    m_window.toggleFullscreen(fullscreen);
}

void Engine::Engine::openInspector()
{
    m_inspector.open = true;
}

void Engine::Engine::setInspectable(Inspectable* inspectable)
{
    m_inspector.setInspectable(inspectable);
}

bool Engine::Engine::isObjectHierarchyOpen() const
{
    return m_objectHierarchy.open;
}

void Engine::Engine::openObjectHierarchy()
{
    m_objectHierarchy.open = true;
}

bool Engine::Engine::isObjectEditorOpen() const
{
    return m_objectEditor.open;
}

void Engine::Engine::openObjectEditor()
{
    m_objectEditor.open = true;
}
