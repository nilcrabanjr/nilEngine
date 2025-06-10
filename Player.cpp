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
		case Alive: return "Alive";
		case Dead: return "Dead";
	}
}

void Player::checkStatus() {
	cout << statusToString();
}

void Player::kill() {
	pstatus = Dead;
}

void Player::printPlayer() {
	cout << pstatus << " " << statusToString() << "\n" << name << "\n" << race << "\n" << health << "\n" << maxHealth << "\n" << attackPower << "\n";
}