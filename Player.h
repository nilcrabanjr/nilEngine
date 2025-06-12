#pragma once
#include <iostream>
#include <cstddef>

enum pStatus {pAlive, pDead};

class Player {
	protected:
		pStatus pstatus;
		std::string name;
		std::string race;
		int health;
		int maxHealth;
		int attackPower;

	public:
		Player(pStatus x, std::string y, std::string z, int q, int o, int p);
		std::string statusToString();
		void checkStatus();
		void printPlayer();
		void kill();
};