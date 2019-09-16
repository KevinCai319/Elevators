#ifndef PHYSICAL_H
#define PHYSICAL_H
#include "GameObject.h"
#include <SFML\Graphics\Shape.hpp>
//#include "WindowRef.h"
class Physical : public GameObject {
public:
	Physical();
	~Physical();
	std::vector<sf::Shape*> shape;
	sf::Vector2<float> relativePosition;
	sf::Vector2<float> position;
	void reserve(int size);
	void addObject(sf::Shape* shape);
	void setObject(int index, sf::Shape* item);
	void render(sf::Shape* shape);
	virtual void update();
	virtual void draw() = 0;
};
#endif

