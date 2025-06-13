#include <iostream>
#include <cstddef>
#include "nilEngine.h"
using namespace std;

int main() {
	Quest q1("Find Herbs", "Collect 5 healing herbs.", NotStarted, Fetch);
	Quest q2("Talk to Elder", "Ask the village elder about the ruins.", NotStarted, Talk);
	NPC npc1(Alive, "Elder Gregor", "Human", 100, 100, 10, {&q1, &q2});

	gameState state;
	Game game(GameOn);
	state = game.checkState();
	if (state == 0) {
		cout << "Game is on\n";
		npc1.printCharacter();
		npc1.printQuests();
	}
	else {
		cout << "Game is off\n";
	}
}