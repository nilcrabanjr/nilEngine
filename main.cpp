#include <iostream>
#include <cstddef>
#include "Quest.h"
#include "Player.h"
#include "Game.h"
#include "NPC.h"
using namespace std;

int main() {
	Quest q1("Find Herbs", "Collect 5 healing herbs.", NotStarted, Fetch);
	Quest q2("Talk to Elder", "Ask the village elder about the ruins.", NotStarted, Talk);
	vector<Quest*> quests = { &q1, &q2 };
	NPC npc1(npcAlive, "Elder Gregor", "Human", 100, 100, 10, quests);

	gameState state;
	Game game(GameOn);
	state = game.checkState();
	if (state == 0) {
		cout << "Game is on\n";
		npc1.printNPC();
		npc1.printQuests();
	}
	else {
		cout << "Game is off\n";
	}
}