#pragma once
#include "SFML/Graphics.hpp"
#include "const.h"
class Road {
private:
	sf::Texture texture;
	sf::Sprite sprite;
public:
	Road() {
		texture.loadFromFile("road.jpg");
		sprite.setTexture(texture);
		sprite.setScale(0.4f, 0.66f);
	}
	void init(float x, float y) { sprite.setPosition(x, y); }
	sf::Sprite getSprite() { return sprite; }
	void update() {
		sprite.move(0.f,3.f);
		if (sprite.getPosition().y >= wh) {
			sprite.setPosition(0.f, -wh);
		}
	}

};