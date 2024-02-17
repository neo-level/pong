#include "../inc/Game.h"
#include "SDL.h"


Game::Game() {

}

bool Game::Initialize() {
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        SDL_Log("Unable to init SDL: %s", SDL_GetError());
        return false;
    }

    if (Window = SDL_CreateWindow("Pong", 100, 100, 1024, 768, 0); !Window) {
        SDL_Log("Failed to create the window: %s", SDL_GetError());
        return false;
    }

    return true;
}

void Game::RunLoop() {
    while (IsRunning) {
        ProcessInput();
        UpdateGame();
        GenerateOutput();
    }
}

void Game::Shutdown() {
    SDL_DestroyWindow(Window);
    SDL_Quit();
}

void Game::ProcessInput() {

}

void Game::UpdateGame() {

}

void Game::GenerateOutput() {

}
