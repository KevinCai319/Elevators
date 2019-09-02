#include "Physical.h"
#include "Global.h"
void Physical::update() {
	position = relativePosition + GameObject::layer.translation;
	for (sf::ConvexShape poly : shape) {
		poly.move(GameObject::layer.translation);
		window.draw(poly);
	}
}
Physical::~Physical() {

}