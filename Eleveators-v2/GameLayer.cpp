#include "GameLayer.h"
GameLayer::GameLayer() {
	
}

GameLayer::GameLayer(sf::Vector2<float> translation) {
	this->translation = translation;
}

void GameLayer::drawLayer() {
	for (GameObject i : objects) {
		i.update();
	}
}

void GameLayer::add(GameObject& item) {
	objects.push_back(item);
}

void GameLayer::shiftTranslation(sf::Vector2<float> shift) {
	translation += shift;
}
