#include <iostream>
#include <cstddef>
#include "Quest.h"
#include "Player.h"
using namespace std;

int main() {
	int i;
	Quest a("Walk Around", "Testing movement capabilites.", NotStarted, Generic);
	TalkQuest b("Talkin", "Having a yap", NotStarted, Generic);
	Player Riley(Alive, "Riley", "Human", 10, 10, 2);

	Riley.checkStatus();
	Riley.kill();
	cout << "\n";
	Riley.checkStatus();
	cout << "\n\n";
	Riley.printPlayer();
}