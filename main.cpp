#include "game.h"

using namespace flappy;


void main()
{
	Game* game = new Game();

	game->run();

	delete game;
}