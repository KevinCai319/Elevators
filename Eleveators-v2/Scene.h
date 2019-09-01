#ifndef SCENE_H
#define SCENE_H
#include "GameHandler.h"
struct Scene {
public:
	Scene();
	~Scene();
	GameHandler handler;
	enum SceneType {
		DEBUG, TITLE, LEVEL, CREDITS, CURRENT, STOP
	};
	virtual SceneType tick();
private:

};
#endif