#include "main.h"
#include <iostream>
#include "WindowRef.h"

void setup(WindowRef window) {
	settings.antialiasingLevel = 8;
	window->setFramerateLimit(240);
	window->setMouseCursorVisible(false);
}

void draw(WindowRef window) {
	sf::Event event;
	while (window->pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			window->close();
	}

	window->clear();
	handler->tick();
	window->display();
}

int main()
{
	sf::RenderWindow window(sf::VideoMode(1080, 720), "SFML works!");
	setup(window);
	handler = new SceneHandler(window);

	while (window.isOpen() || handler->getStatus())
	{
		draw(window);
	}
	return 0;
}