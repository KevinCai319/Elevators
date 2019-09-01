#ifndef SCENE_H
#define SCENE_H
struct Scene {
public:
	enum SceneType {
		DEBUG, TITLE, LEVEL, CREDITS, CURRENT, STOP
	};
	virtual SceneType tick();
private:

};
#endif