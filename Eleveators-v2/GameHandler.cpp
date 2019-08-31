#include "GameHandler.h"
GameHandler::GameHandler() {
	UI = new GameLayer();
	MainLayer = new GameLayer();
	Background = new GameLayer();
}
void GameHandler::drawGame() {
	if(Background)
		Background->drawLayer();
	if (MainLayer)
		MainLayer->drawLayer();
	if (UI)
		UI->drawLayer();
}