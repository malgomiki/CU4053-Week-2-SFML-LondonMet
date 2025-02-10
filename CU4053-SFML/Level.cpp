#include "Level.h"

Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;

	// initialise game objects

}

Level::~Level()
{
}

// handle user input
void Level::handleInput()
{

}

// Update game objects
void Level::update()
{

}

// Render level
void Level::render()
{
	beginDraw();


	endDraw();
}

void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));

}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}