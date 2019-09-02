#ifndef DEBUGSCENE_H
#define DEBUGSCENE_H
#include "GameHandler.h"
#include "Cursor.h"
#include "Scene.h"
class DebugScene : public Scene
{
public:
	DebugScene();
	SceneType tick();
private:
	Cursor cursor;
};
#endif
