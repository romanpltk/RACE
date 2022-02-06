#pragma once
#include "SFML/Graphics.hpp"
#include "road.h"
#include "splash.h"

class Game {
public:
	Game();
	void play();
	void checkEvents();
	void update();
	void draw();
	enum GameState{SPLASH,PLAY,GAME_OVER};
private:
	SplashScreen splash;
	sf::RenderWindow window;
	Road road1, road2;
	GameState game_state{ SPLASH };
};