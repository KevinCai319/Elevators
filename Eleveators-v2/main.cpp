#include "main.h"
#include <iostream>


void setup() {
	
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
	window.draw(shape);
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