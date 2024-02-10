#ifndef ENGINE_GUI_INSPECTOR_HPP
#define ENGINE_GUI_INSPECTOR_HPP
#include "../EngineObject.hpp"
#include "UIWindow.hpp"

namespace Engine
{
    class Inspectable
    {
    public:
        virtual void inspect() = 0;
    };

    class Inspector : public UIWindow, public EngineObject
    {
    public:
        explicit Inspector(Engine* engine);
        ~Inspector() = default;

        void show();
        void setInspectable(Inspectable* inspectable);

    private:
        Inspectable* m_inspectable;
    };
} // Engine

#endif //ENGINE_GUI_INSPECTOR_HPP
