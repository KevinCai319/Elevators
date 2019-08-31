#ifndef GAMELAYER_H
#define GAMELAYER_H

#include <SFML\System\Vector2.hpp>
#include <vector>
struct GameObject;

class GameLayer{
public:
	sf::Vector2<float> translation;
	GameLayer();
	GameLayer(sf::Vector2<float> translation);
	void drawLayer();
	void add(GameObject& item);
	void shiftTranslation(sf::Vector2<float> shift);
private:
	std::vector<GameObject> objects{};
};
struct GameObject {
	GameLayer layer;
	GameObject();
	GameObject(GameLayer& layer);
	~GameObject();
	virtual void update();
};
#endif