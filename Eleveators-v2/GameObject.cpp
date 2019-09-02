#include "GameObject.h"
GameObject::GameObject() 
{

}
GameObject::GameObject(GameLayer& layer) 
{
	this->layer = layer;
}
GameObject::~GameObject() 
{
	
}
void GameObject::setLayer(GameLayer& layer)
{
	this->layer = layer;
}
void GameObject::update() 
{
	std::cout << "setLayer";
}
