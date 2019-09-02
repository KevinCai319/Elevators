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
	//TODO: remove this from layer
}
void GameObject::setLayer(GameLayer& layer)
{
	this->layer = layer;
}
void GameObject::update() 
{
	std::cout << "setLayer";
}
