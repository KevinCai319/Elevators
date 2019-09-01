#include "SceneHandler.h"
SceneHandler::SceneHandler()
{
	start();
}
void SceneHandler::start() {
	currentState = START_SCENE;
	switchScene();
}
void SceneHandler::switchScene()
{
	switch (currentState) {
		case Scene::DEBUG:
			break;
		default:
			break;
	}
}
void SceneHandler::tick() {
	currentState = RunningScene.tick();
	switch (currentState) {
		case Scene::CURRENT:
			return;
		case Scene::STOP:
			isRunning = false;
			return;
		default:
			switchScene();
	}
}
int SceneHandler::getStatus() const
{
	return isRunning;
}
