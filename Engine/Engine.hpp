#ifndef ENGINE_ENGINE_HPP
#define ENGINE_ENGINE_HPP
#include "Window.hpp"
#include "GUI/MainMenuBar.hpp"
#include "GUI/Inspector.hpp"
#include "GUI/ObjectHierarchy.hpp"
#include "GUI/ObjectEditorView.hpp"

namespace Engine
{
    class Engine
    {
    public:
        Engine();
        ~Engine() = default;

        void toggleFullscreen(bool fullscreen);

        bool isInspectorOpen() const;
        void openInspector();
        void setInspectable(Inspectable* inspectable);

        bool isObjectHierarchyOpen() const;
        void openObjectHierarchy();

        bool isObjectEditorOpen() const;
        void openObjectEditor();

    private:
        Window m_window;
        MainMenuBar m_mainMenuBar;
        Inspector m_inspector;
        ObjectHierarchy m_objectHierarchy;
        ObjectEditorView m_objectEditor;

        friend class App;
    };
} // Engine

#endif //ENGINE_ENGINE_HPP
