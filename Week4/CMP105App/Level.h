#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include "Player.h"
#include <string.h>
#include <iostream>
#include "Enemy.h"
#include "Cursor.h"


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
	sf::Texture levelTexture;
	Enemy enemyObject1 = Enemy(40, "gfx/Kane.png",200,50);
	Enemy enemyObject2 = Enemy(60, "gfx/edge.jpg", 300, 200);
	Cursor cursorObject;
	sf::View levelView;
	float cameraSpeed = 300;
	float xOffset;
};