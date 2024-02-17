#include "src/inc/Game.h"

int main(int argc, char* args[]) {
    Game game;

    bool success{game.Initialize()};

    if (success) {
        game.RunLoop();
    }

    game.Shutdown();
    return 0;
}
