#include "ObjectEditorView.hpp"
#include "../Settings.hpp"

#include <imgui-SFML.h>
#include <imgui.h>

Engine::ObjectEditorView::ObjectEditorView(Engine* engine)
: UIWindow{ "Object editor", true }
, EngineObject(engine)
, m_target()
, m_view()
, m_viewHeight(Settings::TileSize * 5.f) {}

void Engine::ObjectEditorView::show()
{
    if (!open)
        return;
    if (ImGui::Begin(name, &open))
    {
        ImVec2 space = ImGui::GetContentRegionAvail();
        if (space.x >= 0.f && space.y >= 0.f)
        {
            sf::Vector2u targetSize(space);
            m_target.create(targetSize.x, targetSize.y);
            m_view.setSize(m_viewHeight * (space.x / space.y), m_viewHeight);

            m_target.clear(sf::Color::White);

            // ...

            m_target.display();
            ImGui::Image(m_target.getTexture());
        }
    }
    ImGui::End();
}
