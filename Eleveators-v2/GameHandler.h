#ifndef GAMEHANDLER_H
#define GAMEHANDLER_H
#include "GameLayer.h"
class GameHandler {
	public:
		WindowRef window;
		GameLayer* UI;
		GameLayer* MainLayer;
		GameLayer* Background;
		GameHandler(WindowRef ref);
		void setWindow(WindowRef window);
		~GameHandler();
		void drawGame();
};
#endif
