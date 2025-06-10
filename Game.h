#pragma once
#include <iostream>
#include <cstddef>

enum gameState {GameOn, GameOff};

class Game {
	protected:
		gameState state;
	public:
		Game(gameState x);
		void on();
		void off();
		gameState checkState();
};
