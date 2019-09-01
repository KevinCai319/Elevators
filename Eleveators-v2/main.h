#ifndef MAIN_H
#define MAIN_H
#include <SFML/Graphics.hpp>
#include "SceneHandler.h"
sf::RenderWindow window(sf::VideoMode(1920, 1080), "SFML works!");
SceneHandler handler;
sf::CircleShape shape(100.f);

void setup();
void draw();
#endif