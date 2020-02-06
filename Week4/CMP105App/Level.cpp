#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;
	// initialise game objects
	texture.loadFromFile("gfx/Mushroom.png");
	playerObject.setWindow(window);
	enemyObject1.setWindow(window);
	enemyObject2.setWindow(window);
	testSprite.setTexture(&texture);
	testSprite.setSize(sf::Vector2f(100, 100));
	testSprite.setPosition(100, 100);
	playerObject.setInput(input);
	
	
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}
	playerObject.handleInput(dt);
}

// Update game objects
void Level::update(float dt)
{
	enemyObject1.update(dt);
	enemyObject2.update(dt);
}

// Render level
void Level::render()
{
	beginDraw();

	//window->draw(testSprite);
	window->draw(playerObject);
	window->draw(enemyObject1);
	window->draw(enemyObject2);
	endDraw();
}

// clear back buffer
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}

