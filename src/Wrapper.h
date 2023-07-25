//
// Created by michael on 25/07/23.
//

#ifndef UNTITLED_WRAPPER_H
#define UNTITLED_WRAPPER_H

#include <iostream>

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

/*
 * wrapper class, manages the app
*/

class Wrapper
{
private:
    //Vars

    //Window
    sf::RenderWindow* window;
    sf::VideoMode video_mode;
    sf::Event event{};
    //Functions
    void init_window();
    void init_vars();
public:
    Wrapper();
    virtual ~Wrapper();

    //Functions
    void poll_events();
    void update();
    void render();

    //Accessors
    [[nodiscard]] const bool is_running() const;
};


#endif //UNTITLED_WRAPPER_H
