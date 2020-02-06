#include "Enemy.h"
#include "SFML/Graphics.hpp"

void Enemy::setWindow(sf::RenderWindow* windowObject)
{
	window = windowObject;
}

void Enemy::update(float dt)
{
	if (getPosition().x + getGlobalBounds().width >= window->getSize().x)
	{
		ReverseX = true;

	}
	else if (getPosition().x <= 0)
	{
		ReverseX = false;
	}
	if (getPosition().y + getGlobalBounds().height >= window->getSize().y)
	{
		ReverseY = true;

	}
	else if (getPosition().y <= 0)
	{
		ReverseY = false;
	}
	if (ReverseX)
	{
		distanceToMoveX = -speed * dt;
	}
	else
	{
		distanceToMoveX = speed * dt;
	}if (ReverseY)
	{
		distanceToMoveY = -speed * dt;
	}
	else
	{
		distanceToMoveY = speed * dt;
	}
	move(distanceToMoveX, distanceToMoveY);
}
