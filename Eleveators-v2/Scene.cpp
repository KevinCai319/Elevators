#include "Scene.h"
Scene::Scene(WindowRef ref) {
	setWindow(ref);
	handler = new GameHandler(ref);
}
void Scene::setWindow(WindowRef window) {
	this->window = window;
}
Scene::~Scene() {
}
Scene::SceneType Scene::tick() {
	return Scene::CURRENT;
}
