#pragma once
#include "SFML/Graphics.hpp"
class SplashScreen {
private:
	sf::Texture texture;
	sf::Sprite sprite;
public:
	SplashScreen (){
		texture.loadFromFile("start.jpg");
		sprite.setTexture(texture);
		sprite.setScale(0.46875f, 1.041666666666667f);
		sprite.setColor(sf::Color(238, 130, 238));

	}
	sf::Sprite getSprite(){ return sprite; }
};