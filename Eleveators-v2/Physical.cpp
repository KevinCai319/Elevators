#include "Physical.h"
#include "Global.h"
Physical::Physical(){

}
void Physical::update() {
	position = relativePosition + layer->translation;
	for (sf::Shape* poly : shape) {
		poly->setOrigin(layer->translation);
		window.draw(*poly);
	}
}
void Physical::reserve(int size) {
	shape.reserve(size);
}
void Physical::addObject(sf::Shape* item) {
	shape.push_back(item);
}
void Physical::setObject(int index, sf::Shape* item) {
	shape.at(index) = item;
}
Physical::~Physical() {

}