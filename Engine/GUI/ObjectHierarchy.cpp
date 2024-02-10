#include "ObjectHierarchy.hpp"
#include <imgui.h>

Engine::ObjectHierarchy::ObjectHierarchy(Engine* engine)
: UIWindow{ "Object hierarchy", true }
, EngineObject(engine)
{}

void Engine::ObjectHierarchy::show()
{
    if (!open)
        return;
    if (ImGui::Begin(name, &open))
    {
        ImGui::Text("Hierarchy wow");
    }
    ImGui::End();
}
