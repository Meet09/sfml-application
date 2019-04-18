#include<SFML\Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(1366, 730), "Jerker Graphics",sf::Style::Default);
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::White);
	shape.setOrigin(50.f, 50.0f);
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		// Mouse Input  
		
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			sf::Vector2i mousepos = sf::Mouse::getPosition(window);
			shape.setPosition((float)mousepos.x, (float)mousepos.y);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		{
			shape.setFillColor(sf::Color::White);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::X))
		{
			shape.setFillColor(sf::Color::Black);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::B))
		{
			shape.setFillColor(sf::Color::Blue);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::C))
		{
			shape.setFillColor(sf::Color::Cyan);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::G))
		{
			shape.setFillColor(sf::Color::Green);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Y))
		{
			shape.setFillColor(sf::Color::Yellow);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::M))
		{
			shape.setFillColor(sf::Color::Magenta);
		}



		
		window.draw(shape);
		window.display();
	}


	

	return 0;
}