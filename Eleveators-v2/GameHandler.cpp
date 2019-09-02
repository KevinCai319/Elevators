#include "GameHandler.h"
GameHandler::GameHandler() {
	//std::cout << "tick";
}
void GameHandler::drawGame() {
	//std::cout << "tick";
	Background.drawLayer();
	MainLayer.drawLayer();
	UI.drawLayer();
}
GameHandler::~GameHandler() {
	
}