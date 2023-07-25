//
// Created by michael on 25/07/23.
//

#include "Wrapper.h"

Wrapper::Wrapper()
{
    init_vars();
    init_window();
}

Wrapper::~Wrapper()
{
    delete window;
}

void Wrapper::update()
{
    poll_events();
}

void Wrapper::render()
{
    window->clear(sf::Color::Red);

    //Draw game objects

    window->display();
}

void Wrapper::init_window()
{
    window = new sf::RenderWindow(sf::VideoMode(1920,1080), "Rank Grabber", sf::Style::Default);
}

void Wrapper::init_vars()
{
    //Vars
    video_mode.height = 1080;
    video_mode.width = 1920;

    //Window
    window = nullptr;
}

const bool Wrapper::is_running() const
{
    return window->isOpen();
}

void Wrapper::poll_events()
{
    while(window->pollEvent(event))
    {
        switch(event.type)
        {
            case sf::Event::Closed:
                window->close();
                break;
            case sf::Event::KeyPressed:
                if(event.key.code == sf::Keyboard::Escape)
                    window->close();
                break;
        }
    }
}
