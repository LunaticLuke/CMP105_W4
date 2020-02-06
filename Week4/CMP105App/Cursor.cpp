#include "Cursor.h"



void Cursor::setWindow(sf::RenderWindow* windowObject)
{
	window = windowObject;
}

void Cursor::update(float dt)
{
	setPosition(sf::Mouse::getPosition(*window).x, sf::Mouse::getPosition(*window).y);
}
