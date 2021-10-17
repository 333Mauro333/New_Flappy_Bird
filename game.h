#ifndef GAME.H
#define GAME.H

namespace flappy
{
	class Game
	{
	private:
		enum class RESOLUTION { NONE = -1, LOW, MEDIUM, HIGH };

		static int screenWidth;
		static int screenHeight;

		void init();
		void update();
		void draw();
		void close();

	public:
		Game();
		~Game();

		void run();
		static int getScreenWidth();
		static int getScreenHeight();
		static void setResolution(RESOLUTION resolution);
	};
}

#endif // !GAME.H