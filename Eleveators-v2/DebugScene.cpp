#include "DebugScene.h"
DebugScene::DebugScene() {
	handler.Background.add(cursor);
}
Scene::SceneType DebugScene::tick() {
	handler.drawGame();
	return Scene::CURRENT;
}