#pragma once
#include "Engine/GameEngine.h"

class Score : public GameObject
{
public:
	Score(sf::Vector2f pos);

	void draw();
	void update(sf::Time& elapsed)
};
