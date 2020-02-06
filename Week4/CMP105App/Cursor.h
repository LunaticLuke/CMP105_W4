#include "Framework/GameObject.h"

#pragma once
class Cursor : public GameObject
{
public:
	Cursor()
	{
		texture.loadFromFile("gfx/icon.png");
		setTexture(&texture);
		setSize(sf::Vector2f(100, 100));
	}
	void setWindow(sf::RenderWindow* window);
	void update(float dt);
private:
	sf::Texture texture;
	sf::RenderWindow* window;

};

