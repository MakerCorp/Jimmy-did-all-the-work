#pragma once
#include "stdafx.h"
#include <SFML/Graphics.hpp>
#include <time.h>

using namespace sf;

#define Max_NUMBER_OF_ITEMS 3

class Menu
{
public:
	Menu(float width, float height);
	~Menu();

	void draw(RenderWindow &window);
	void MoveUp();
	void MoveDown();

private:
	int selectedItemIndex;
	Font font;
	Text text[Max_NUMBER_OF_ITEMS]

};