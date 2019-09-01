#ifndef GAMEHANDLER_H
#define GAMEHANDLER_H
#include "GameLayer.h"
class GameHandler {
	public:
		GameLayer UI;
		GameLayer MainLayer;
		GameLayer Background;
		GameHandler();
		~GameHandler();
		void drawGame();
};
#endif
