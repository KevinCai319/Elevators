#ifndef PHYSICAL_H
#define PHYSICAL_H
#include "GameObject.h"
#include <SFML\Graphics\ConvexShape.hpp>
#include "Global.h"
class Physical : public GameObject {
public:
	~Physical();
	sf::ConvexShape shape[5];
	sf::Vector2<float> relativePosition;
	sf::Vector2<float> position;
	virtual void update();
	virtual void draw() = 0;
};
#endif

