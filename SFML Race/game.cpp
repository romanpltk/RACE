#include "game.h"
#include "const.h"
Game::Game(){
	window.create(sf::VideoMode(
		static_cast<size_t>(wd),
		static_cast<size_t>(wh)
		), wt);
	window.setFramerateLimit(60);
	road1.init(0.f, 0.f);
	road2.init(0.f, -wh);
}

void Game::play(){
	while (window.isOpen())
	{
		checkEvents();
		update();
		draw();

	}
}
void Game::checkEvents(){
	sf::Event event;
	while (window.pollEvent(event))
	{
		
		if (event.type == sf::Event::Closed)
			
			window.close();
		if (event.type == sf::Event::KeyPressed) {
			if (game_state==SPLASH && event.key.code == sf::Keyboard::Space) {
				game_state = PLAY;
			}
		}
	}
}
void Game::update() { 
switch (game_state) {
case SPLASH:
	break;
case PLAY:
	road1.update();
	road2.update();
	break;
}
}
void Game::draw(){
	
	switch (game_state) {
	case SPLASH:
		window.draw(splash.getSprite());
		break;
	case PLAY:
		window.clear(sf::Color::Black);
		window.draw(road1.getSprite());
		window.draw(road2.getSprite());
		break;
	}
	window.display();
}