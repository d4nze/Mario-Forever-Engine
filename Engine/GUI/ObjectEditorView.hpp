#ifndef ENGINE_GUI_OBJECT_EDITOR_VIEW_HPP
#define ENGINE_GUI_OBJECT_EDITOR_VIEW_HPP
#include <SFML/Graphics/RenderTexture.hpp>
#include "../EngineObject.hpp"
#include "UIWindow.hpp"

namespace Engine
{
    class ObjectEditorView : public UIWindow, public EngineObject
    {
    public:
        ObjectEditorView(Engine* engine);
        ~ObjectEditorView() = default;

        void show();

    private:
        sf::RenderTexture m_target;
        sf::View m_view;
        float m_viewHeight;
    };
} // Engine

#endif //ENGINE_GUI_OBJECT_EDITOR_VIEW_HPP
