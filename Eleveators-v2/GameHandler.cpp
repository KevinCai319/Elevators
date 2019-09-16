#include "GameHandler.h"
GameHandler::GameHandler(WindowRef ref) {
	setWindow(ref);
	Background = new GameLayer(ref);
	MainLayer = new GameLayer(ref);
	UI = new GameLayer(ref);
}
void GameHandler::setWindow(WindowRef window) {
	this->window = window;
}
void GameHandler::drawGame() {
	Background->drawLayer();
	MainLayer->drawLayer();
	UI->drawLayer();
}
GameHandler::~GameHandler() {
	
}