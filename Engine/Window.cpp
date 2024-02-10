#include "Window.hpp"
#include <Windows.h>
#include "imgui-SFML.h"

Engine::Window::Window()
: sf::RenderWindow()
, m_lastVideoMode(sf::VideoMode::getDesktopMode())
{
    toggleFullscreen(false);
    if (!ImGui::SFML::Init(*this)) {}
}

Engine::Window::~Window()
{
    ImGui::SFML::Shutdown();
}

void Engine::Window::toggleFullscreen(bool fullscreen)
{
    if (!fullscreen)
    {
        create(m_lastVideoMode, WINDOW_TITLE);
        ShowWindow(getSystemHandle(), SW_MAXIMIZE);
    }
    else
    {
        sf::Vector2u size = getSize();
        m_lastVideoMode.width = size.x;
        m_lastVideoMode.height = size.y;
        create(sf::VideoMode::getDesktopMode(), WINDOW_TITLE, sf::Style::Fullscreen);
    }
}

bool Engine::Window::isOpen() const
{
    return sf::Window::isOpen();
}

#include <SFML/Window/Event.hpp>

void Engine::Window::pollEvents()
{
    static sf::Event ev;
    static sf::Clock deltaClock;
    while (pollEvent(ev))
    {
        if (ev.type == sf::Event::Closed)
        {
            close();
        }
        ImGui::SFML::ProcessEvent(*this, ev);
    }
    ImGui::SFML::Update(*this, deltaClock.restart());
}

void Engine::Window::render()
{
    ImGui::SFML::Render(*this);
    display();
}
