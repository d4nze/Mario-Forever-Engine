#ifndef ENGINE_APP_HPP
#define ENGINE_APP_HPP
#include "Engine.hpp"

namespace Engine
{
    class App
    {
    public:
        App() = default;
        ~App() = default;

        int run();

    private:
        void showUI();

        Engine m_engine;
    };
} // Engine

#endif //ENGINE_APP_HPP
