#include "game.h"

#include "raylib.h"


namespace flappy
{
	Game::Game()
	{
		const char windowTitle[17] = "New Flappy Bird";

		InitWindow(screenWidth, screenHeight, windowTitle);
		SetTargetFPS(60);

		InitAudioDevice();

	}
	Game::~Game()
	{

	}

	void Game::run()
	{
		init();

		while (!WindowShouldClose())
		{
			update();

			draw();
		}

		close();
	}

	int Game::getScreenWidth()
	{
		return screenWidth;
	}
	int Game::getScreenHeight()
	{
		return screenHeight;
	}
	void Game::setResolution(RESOLUTION resolution)
	{
		switch (resolution)
		{
		case RESOLUTION::LOW:
			screenWidth = 400;
			screenHeight = 300;
			break;

		case RESOLUTION::MEDIUM:
			screenWidth = 640;
			screenHeight = 480;
			break;

		case RESOLUTION::HIGH:
			screenWidth = 800;
			screenHeight = 600;
			break;

		default:
			screenWidth = 640;
			screenHeight = 480;
			break;
		}
	}


	int Game::screenWidth = 640;
	int Game::screenHeight = 480;

	void Game::init()
	{
		// Obtiene la nueva escena y la carga.
	}
	void Game::update()
	{
		// Obtiene la escena y la actualiza.
	}
	void Game::draw()
	{
		BeginDrawing();

		// Obtiene la escena y la dibuja.

		EndDrawing();
	}
	void Game::close()
	{
		CloseWindow();
	}
}