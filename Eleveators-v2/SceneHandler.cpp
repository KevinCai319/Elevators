#include "SceneHandler.h"
#include "DebugScene.h"
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
	delete RunningScene;
	switch (currentState) {
	case Scene::DEBUG:
			RunningScene = new DebugScene;
			break;
		case Scene::TITLE:
			break;
		case Scene::LEVEL:
			break;
		case Scene::CREDITS:
			break;
		default:
			break;
	}
}
void SceneHandler::tick() {
	currentState = RunningScene->tick();
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
