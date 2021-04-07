#pragma once

#include "Engine/GameEngine.h"

class Ship : public GameObject
{
public:
	Ship();

	void draw();
private:
	sf::Sprite sprite_;
};

typedefstd::shared_ptr<Ship> ShipPtr;