#include "Framework/GameObject.h"
#include "SFML/Graphics.hpp"

#pragma once
class Player : public GameObject
{
public:
	Player(int speedValue)
	{
		speed = speedValue;
		texture.loadFromFile("gfx/Mushroom.png");
		setTexture(&texture);
		setSize(sf::Vector2f(150, 150));
		setPosition(200, 200);
	};
	~Player()
	{

	};
	void handleInput(float dt) override;
	void setWindow(sf::RenderWindow* renderWindow);
private:
	int speed = 5;
	sf::Texture texture;
	sf::RenderWindow* windowObject;
};

