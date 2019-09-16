#include "DebugScene.h"
DebugScene::DebugScene(WindowRef ref) :Scene(ref) {
	handler->Background->add(cursor);
	line = Line(sf::Vector2f(800, 300), sf::Vector2f(600, 600), 10);
	handler->MainLayer->add(line);
}
Scene::SceneType DebugScene::tick() {
	handler->drawGame();
	return Scene::CURRENT;
}