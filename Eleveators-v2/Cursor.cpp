#include "Cursor.h"
Cursor::Cursor() {
	// resize it to 5 points
	cursor.setPointCount(5);
}
void Cursor::update() {
	sf::Vector2f tmp = static_cast<sf::Vector2f>(mouse.getPosition(window));
	cursor.setPoint(0, tmp);
	cursor.setPoint(1, tmp + sf::Vector2f(14, 2)* CURSOR_SCALE);
	cursor.setPoint(2, tmp + sf::Vector2f(16, 10) * CURSOR_SCALE);
	cursor.setPoint(3, tmp + sf::Vector2f(10, 16) * CURSOR_SCALE);
	cursor.setPoint(4, tmp + sf::Vector2f(2, 14) * CURSOR_SCALE);
	draw();
	Physical::update();
}
void Cursor::draw() {
	shape[0] = cursor;
}