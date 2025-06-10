#include <iostream>
#include <cstddef>
#include "Quest.h"
#include "Player.h"
#include "Game.h"
using namespace std;

int main() {
	gameState state;
	Game game(GameOn);
	state = game.checkState();
	if (state == 0) {
		cout << "Game is on";
	}
	else {
		cout << "Game is off";
	}
}