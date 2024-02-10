#ifndef ENGINE_GUI_OBJECT_HIERARCHY_HPP
#define ENGINE_GUI_OBJECT_HIERARCHY_HPP
#include "../EngineObject.hpp"
#include "UIWindow.hpp"

namespace Engine
{
    class ObjectHierarchy : public UIWindow, public EngineObject
    {
    public:
        explicit ObjectHierarchy(Engine* engine);
        ~ObjectHierarchy() = default;

        void show();
    };
} // Engine

#endif //ENGINE_GUI_OBJECT_HIERARCHY_HPP
