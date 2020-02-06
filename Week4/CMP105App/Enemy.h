#include "Framework/GameObject.h"
#include <string>

#pragma once
class Enemy : public GameObject
{
public:
	Enemy(int speedOfEnemy, std::string addressOfTexture,float xStartPos, int yStartPos)
	{
		texture.loadFromFile(addressOfTexture);
		speed = speedOfEnemy;
		setTexture(&texture);
		setSize(sf::Vector2f(75, 75));
		setPosition(xStartPos, yStartPos);
	}
	void setWindow(sf::RenderWindow* renderWindow);
	void update(float dt);
	private:
		sf::Texture texture;
		sf::RenderWindow* window;
		bool ReverseX;
		bool ReverseY;
		float distanceToMoveX;
		float distanceToMoveY;
		int speed;
};

