#include "stdafx.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Menu.h"

using namespace sf;

int main()
{
	RenderWindow window(VideoMode(600, 600), "SFML WORK!");

	Menu menu(window.getSize().x, window.getSize().y);

	while (window.isOpen())
	{
		Event event;

		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case Event::Closed:
					window.close();

					break;
			}
		}

		window.clear();

		menu.draw(window);

		window.display();

	}
}

