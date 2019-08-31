#include "Physical.h"
void Physical::update() {
	position = relativePosition + GameObject::layer.translation;
}
void Physical::draw() {

}
Physical::~Physical() {

}