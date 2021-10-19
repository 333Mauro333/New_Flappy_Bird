#ifndef GAME.H
#define GAME.H

namespace flappy
{
	enum class RESOLUTION { NONE = -1, LOW, MEDIUM, HIGH };

	class Game
	{
	public:
		Game();
		~Game();

		void run();
		static int getScreenWidth();
		static int getScreenHeight();
		static void setResolution(RESOLUTION resolution);

	private:
		static int screenWidth;
		static int screenHeight;

		void init();
		void update();
		void draw();
		void close();
	};
}

#endif // !GAME.H