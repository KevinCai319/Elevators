#ifndef SCENEHANDLER_H
#define SCENEHANDLER_H
#include <unordered_map>
#include "Scene.h"
class SceneHandler{
public:
	Scene::SceneType currentState = DEFAULT_SCENE;
	Scene RunningScene;
	SceneHandler();
	void switchScene();
	int getStatus() const;
	void tick();
private:
	const Scene::SceneType DEFAULT_SCENE = Scene::DEBUG;
	const Scene::SceneType START_SCENE = Scene::DEBUG;
	bool isRunning = 1;
	void start();
};
#endif
