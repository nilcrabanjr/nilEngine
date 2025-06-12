#include <iostream>
#include <cstddef>
#include "Player.h"
using namespace std;

Player::Player(pStatus x, string y, string z, int q, int o, int p) {
	pstatus = x;
	name = y;
	race = z;
	health = q;
	maxHealth = o;
	attackPower = p;
}

string Player::statusToString() {
	switch (pstatus) {
		case pAlive: return "Alive";
		case pDead: return "Dead";
	}
}

void Player::checkStatus() {
	cout << statusToString();
}

void Player::kill() {
	pstatus = pDead;
}

void Player::printPlayer() {
	cout << pstatus << " " << statusToString() << "\n" << name << "\n" << race << "\n" << health << "\n" << maxHealth << "\n" << attackPower << "\n";
}