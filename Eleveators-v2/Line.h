#ifndef LINE_H
#define LINE_H
#include <SFML\Graphics\RectangleShape.hpp>
#include <SFML\Graphics\CircleShape.hpp>
#include "Physical.h"
class Line : public Physical
{
	public:
		sf::Mouse mouse;
		Line();
		Line(sf::Vector2f start, sf::Vector2f end, float thickness);
		~Line();
		void resetEnd(sf::Vector2f v2);
		void update();
		void draw();
	private:
		sf::Vector2f startPoint;
		sf::Vector2f endPoint;
		float thickness;
		float angle;
		float length;
		sf::CircleShape start;
		sf::RectangleShape line;
		sf::CircleShape end;
		void calcLine();
		void calcAngle();
		sf::Vector2f distance;
		void calcDistance();
		sf::Vector2f getRealPoint(sf::Vector2f vertex);

};
#endif

