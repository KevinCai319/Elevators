#include "Cursor.h"
Cursor::Cursor() {
	// resize it to 5 points
	cursor.setPointCount(5);
	//std::cout << "tick";
}
void Cursor::update() {
	sf::Vector2f tmp = static_cast<sf::Vector2f>(mouse.getPosition(window));
	cursor.setPoint(0, tmp);
	cursor.setPoint(1, tmp + sf::Vector2f(50, 10));
	cursor.setPoint(2, tmp + sf::Vector2f(40, 80));
	cursor.setPoint(3, tmp + sf::Vector2f(25, 100));
	cursor.setPoint(4, tmp + sf::Vector2f(10, 20));
	draw();
	Physical::update();
}
void Cursor::draw() {
	shape[0] = cursor;
}