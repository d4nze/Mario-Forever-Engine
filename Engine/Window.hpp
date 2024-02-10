#ifndef ENGINE_WINDOW_HPP
#define ENGINE_WINDOW_HPP
#define WINDOW_TITLE "Mario Forever Engine"
#include <SFML/Graphics/RenderWindow.hpp>

namespace Engine
{
    class Window : private sf::RenderWindow
    {
    public:
        Window();
        ~Window() override;

        void toggleFullscreen(bool fullscreen);
        bool isOpen() const override;

        void pollEvents();
        void render();

    private:
        sf::VideoMode m_lastVideoMode;
    };
} // Engine

#endif //ENGINE_WINDOW_HPP
