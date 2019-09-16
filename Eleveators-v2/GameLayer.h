#ifndef GAMELAYER_H
#define GAMELAYER_H

#include <SFML\System\Vector2.hpp>
#include <vector>
#include <iostream>
#include "WindowRef.h"
struct GameObject;

class GameLayer{
public:
	WindowRef window;
	void setWindow(WindowRef window);
	sf::Vector2<float> translation;
	GameLayer(WindowRef window);
	GameLayer(sf::Vector2<float> translation);
	void drawLayer();
	void add(GameObject& item); // mr kevin, can we cha
	void shiftTranslation(sf::Vector2<float> shift);
	std::vector<GameObject*> objects{};
};
struct GameObject {
	GameLayer* layer;
	GameObject();
	GameObject(GameLayer& layer);
	~GameObject();
	void setLayer(GameLayer& layer) ;
	virtual void update();
};
#endif