#include "Inspector.hpp"
#include <imgui.h>

Engine::Inspector::Inspector(Engine* engine)
: UIWindow{ "Inspector", true }
, EngineObject(engine)
, m_inspectable(nullptr)
{}

void Engine::Inspector::show()
{
    if (!open)
        return;
    if (ImGui::Begin(name, &open))
    {
        if (m_inspectable != nullptr)
        {
            m_inspectable->inspect();
        }
    }
    ImGui::End();
}

void Engine::Inspector::setInspectable(Inspectable* inspectable)
{
    m_inspectable = inspectable;
}
