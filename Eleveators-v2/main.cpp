#include "main.h"
#include <iostream>
sf::RenderWindow window(sf::VideoMode(1920, 1080), "SFML works!");
void setup() {
	settings.antialiasingLevel = 8;
	window.setFramerateLimit(240);
	window.Window::setMouseCursorVisible(false);
	shape.setFillColor(sf::Color::Green);
}
void draw() {
	sf::Event event;
	while (window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			window.close();
	}

	window.clear();
	handler.tick();
	//window.draw(shape);
	window.display();
}

int main()
{
	setup();
	while (window.isOpen() || handler.getStatus())
	{
		draw();
	}
	return 0;
}