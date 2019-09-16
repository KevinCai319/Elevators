#ifndef MAIN_H
#define MAIN_H
#include <SFML/Graphics.hpp>
#include "WindowRef.h"
#include "SceneHandler.h"
SceneHandler* handler;
sf::ContextSettings settings;
void setup(WindowRef window);
void draw(WindowRef window);
#endif