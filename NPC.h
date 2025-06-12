#pragma once
#include <iostream>
#include <cstddef>
#include <vector>
#include "Quest.h"

enum npcStatus { npcAlive, npcDead };

class NPC {
protected:
	npcStatus npcstatus;
	std::string name;
	std::string race;
	int health;
	int maxHealth;
	int attackPower;
	std::vector<Quest*> npcQuests;

public:
	NPC(npcStatus x, std::string y, std::string z, int q, int o, int p, std::vector<Quest*> k);
	std::string statusToString();
	void checkStatus();
	void printNPC();
	void kill();
	void printQuests();
};