#ifndef DEBUGSCENE_H
#define DEBUGSCENE_H
#include "GameHandler.h"
#include "Cursor.h"
#include "Line.h"
#include "Scene.h"
class DebugScene : public Scene
{
public:
	WindowRef window;
	DebugScene(WindowRef ref);
	SceneType tick();
private:
	Cursor cursor;
	Line line;
};
#endif
