#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;
	// initialise game objects
	levelTexture.loadFromFile("gfx/Level1_1.png");
	texture.loadFromFile("gfx/Mushroom.png");
	playerObject.setWindow(window);
	enemyObject1.setWindow(window);
	enemyObject2.setWindow(window);
	cursorObject.setWindow(window);
	testSprite.setTexture(&levelTexture);
	testSprite.setSize(sf::Vector2f(11038, 675));
	testSprite.setPosition(0, 0);
	playerObject.setInput(input);
	window->setMouseCursorVisible(false);
	
	
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
	cursorObject.update(dt);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(testSprite);
	window->draw(playerObject);
	window->draw(enemyObject1);
	window->draw(enemyObject2);
	window->draw(cursorObject);
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

