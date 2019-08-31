#ifndef PHYSICAL_H
#define PHYSICAL_H
#include "GameObject.h"
class Physical : public GameObject {
public:
	~Physical();
	void update();
	void draw();
private:
	sf::Vector2<float> position;
	sf::Vector2<float> relativePosition;
};
#endif

