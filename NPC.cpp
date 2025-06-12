#include <iostream>
#include <cstddef>
#include <vector>
#include "NPC.h"
using namespace std;

NPC::NPC(npcStatus x, string y, string z, int q, int o, int p, vector<Quest*> k) {
	npcstatus = x;
	name = y;
	race = z;
	health = q;
	maxHealth = o;
	attackPower = p;
	npcQuests = k;
}

string NPC::statusToString() {
	switch (npcstatus) {
	case npcAlive: return "Alive";
	case npcDead: return "Dead";
	}
}

void NPC::checkStatus() {
	cout << statusToString();
}

void NPC::kill() {
	npcstatus = npcDead;
}

void NPC::printNPC() {
	int i;
	cout << npcstatus << " " << statusToString() << "\n" << name << "\n" << race << "\n" << health << "\n" << maxHealth << "\n" << attackPower << "\n";
}

void NPC::printQuests() {
	cout << "Quests for " << name << ":\n";
	if (npcQuests.empty()) {
		cout << "  (No quests assigned)\n";
		return;
	}
	for (size_t i = 0; i < npcQuests.size(); ++i) {
		cout << "  [" << i + 1 << "] ";
		npcQuests[i]->printStatus();
	}
}