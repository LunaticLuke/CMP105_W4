#include "Player.h"
#include "Framework/Input.h"




void Player::handleInput(float dt)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{

		if (getPosition().x + getGlobalBounds().width <= windowObject->getSize().x)
		{

			move(dt * speed, 0);
		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		if (getPosition().x >= 0)
		{
			move(-speed * dt, 0);
		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{

		if (getPosition().y >= 0)
		{
			move(0, dt * -speed);
		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{

		if (getPosition().y + getGlobalBounds().height <= windowObject->getSize().y)
		{
			move(0, dt * speed);
		}
	}
}

void Player::setWindow(sf::RenderWindow* renderwindow)
{
	windowObject = renderwindow;
}
