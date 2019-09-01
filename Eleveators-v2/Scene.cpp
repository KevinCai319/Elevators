#include "Scene.h"
Scene::Scene() {
}
Scene::~Scene() {
}
Scene::SceneType Scene::tick() {
	return Scene::CURRENT;
}
