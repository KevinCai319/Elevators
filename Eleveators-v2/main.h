#ifndef MAIN_H
#define MAIN_H
#include <SFML/Graphics.hpp>
#include "Global.h"
#include "SceneHandler.h"
SceneHandler handler;
sf::CircleShape shape(100.f);
sf::ContextSettings settings;

void setup();
void draw();
#endif