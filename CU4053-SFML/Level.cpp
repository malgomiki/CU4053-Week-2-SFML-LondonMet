#include "Level.h"

Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;

	// initialise game objects
	rect.setSize(sf::Vector2f(100, 100));
	rect.setPosition(100, 100);
	rect.setFillColor(sf::Color::Red);

	rect1.setSize(sf::Vector2f(70, 70));
	rect1.setPosition(115, 115);
	rect1.setFillColor(sf::Color::Green);

	rect2.setSize(sf::Vector2f(25, 25));
	rect2.setPosition(138, 138);
	rect2.setFillColor(sf::Color::Blue);

	rectStick.setSize(sf::Vector2f(100, 100));
	rectStick.setPosition(1180, 620);
	rectStick.setFillColor(sf::Color::Green);

	circ.setRadius(15);
	circ.setPosition(640, 360);
	circ.setFillColor(sf::Color::Cyan);
	circ.setOutlineColor(sf::Color::Blue);
	circ.setOutlineThickness(2.f);

	if (!font.loadFromFile("font/msgothic.ttc")) {
		std::cout << "Error loading font.\n";
	}

	text.setFont(font);
	text.setString("youre walking an ostrich you daft helmet (IT'S AN EMU)");
	text.setCharacterSize(24);
	text.setFillColor(sf::Color::Magenta);
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
	sf::Vector2u winSize = window->getSize();
	rectStick.setPosition(winSize.x - rectStick.getSize().x, winSize.y - rectStick.getSize().y);
}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(rect);
	window->draw(rect1);
	window->draw(rect2);
	window->draw(rectStick);
	window->draw(circ);
	window->draw(text);
	endDraw();
}

void Level::beginDraw()
{
	window->clear(sf::Color(24, 24, 24));

}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}