#include <iostream>
#include <cstddef>
#include "Game.h"
using namespace std;

Game::Game(gameState x) {
	state = x;
}

void Game::on() {
	state = GameOn;
}

void Game::off() {
	state = GameOff;
}

gameState Game::checkState() {
	return state;
}