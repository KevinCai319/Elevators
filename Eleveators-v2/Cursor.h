#ifndef CURSOR_H
#define CURSOR_H
#include "Physical.h"
#include <SFML\Window\Mouse.hpp>

class Cursor : public Physical
{
public:
	Cursor();
	sf::Mouse mouse;
	sf::ConvexShape cursor;
	void draw();
	void update();
private:
	const float CURSOR_SCALE = 2.0f;

};
#endif

