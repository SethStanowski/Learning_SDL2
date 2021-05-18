#include "Game.h"

Game *game = nullptr;

int main(int argc, const char* argv[]) {
	game = new Game();

	game->init("BirtchEngine", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, true);
	while (game->running()) {
		game->handelEvents();
		game->update();
		game->render();
	}

	game->clean();
	return 0;
}