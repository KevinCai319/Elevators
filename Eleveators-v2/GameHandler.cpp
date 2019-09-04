#include "GameHandler.h"
GameHandler::GameHandler() {
}
void GameHandler::drawGame() {
	Background.drawLayer();
	MainLayer.drawLayer();
	UI.drawLayer();
}
GameHandler::~GameHandler() {
	
}