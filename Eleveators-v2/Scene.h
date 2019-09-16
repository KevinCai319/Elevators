#ifndef SCENE_H
#define SCENE_H
#include "GameHandler.h"
struct Scene {
public:
	WindowRef window;
	Scene(WindowRef ref);
	~Scene();
	void setWindow(WindowRef window);
	GameHandler* handler;
	enum SceneType {
		DEBUG, TITLE, LEVEL, CREDITS, CURRENT, STOP
	};
	virtual SceneType tick();
private:

};
#endif