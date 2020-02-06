#include "Framework/GameObject.h"
#include "SFML/Graphics.hpp"

#pragma once
class Player : public GameObject
{
public:
	Player(int speedValue)
	{
		speed = speedValue;
	};
	~Player()
	{

	};
	void handleInput(float dt) override;
	void setWindow(sf::RenderWindow* renderWindow);
private:
	int speed = 5;
	sf::RenderWindow* windowObject;
};

