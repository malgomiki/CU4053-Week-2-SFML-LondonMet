// Main
// Entry point of the application.
// Handles window creation and window events.
// Contains the game loop, updates input class and contains the level objects.

#include <iostream>
#include "Level.h"

void windowProcess(sf::RenderWindow* window)
{
	sf::Event event;
	while (window->pollEvent(event))
	{
		switch (event.type)
		{
		case sf::Event::Closed:
			window->close();
			break;
		case sf::Event::Resized:
			window->setView(sf::View(sf::FloatRect(0.f, 0.f, (float)event.size.width, (float)event.size.height)));
			break;
		default:
			// don't handle other events
			break;
		}
	}
}

int main()
{
	//Create the window
	sf::RenderWindow window(sf::VideoMode(1280, 720), "double fanta madness");

	// Initialise input and level objects.
	Level level(&window);

	// Game Loop
	while (window.isOpen())
	{
		// Handle window events.
		windowProcess(&window);

		// Call standard game loop functions (input, update and render)
		level.handleInput();
		level.update();
		level.render();

	}

}

