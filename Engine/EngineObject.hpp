#ifndef ENGINE_ENGINE_OBJECT_HPP
#define ENGINE_ENGINE_OBJECT_HPP

namespace Engine
{
    class Engine;
    class EngineObject
    {
    public:
        explicit EngineObject(Engine* engine);

    protected:
        Engine* m_engine;
    };
} // Engine

#endif //ENGINE_ENGINE_OBJECT_HPP
