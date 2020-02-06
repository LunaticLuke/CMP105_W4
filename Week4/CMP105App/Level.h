#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include "Player.h"
#include <string.h>
#include <iostream>
#include "Enemy.h"


class Level{
public:
	Level(sf::RenderWindow* hwnd, Input* in);
	~Level();

	void handleInput(float dt);
	void update(float dt);
	void render();
private:
	// Default functions for rendering to the screen.
	void beginDraw();
	void endDraw();

	// Default variables for level class.
	sf::RenderWindow* window;
	Input* input;
	Player playerObject = Player(75);
	// Level objects
	GameObject testSprite;
	sf::Texture texture;
	Enemy enemyObject1 = Enemy(40, "gfx/goomba.png",200,50);
	Enemy enemyObject2 = Enemy(60, "gfx/edge.jpg", 300, 200);
};