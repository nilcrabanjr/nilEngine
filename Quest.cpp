#include <iostream>
#include <cstddef>
#include "Quest.h"
using namespace std;

Quest::Quest(string x, string y, QuestState z, QuestType q) {
	name = x;
	description = y;
	qstate = z;
	qtype = q;
}

void Quest::start() {
	cout << name << " Started\n";
	qstate = Started;
}

void Quest::complete() {
	cout << name << " Finished\n";
	qstate = Finished;
}

void Quest::printStatus() {
	cout << "Quest Name: " << name << "\nDescription: " << description << "\nState: " << qstate << "\nType: " << qtype << "\n";
}

void TalkQuest::start() {
	cout << name << " Started\n";
	qstate = Started;
}

void TalkQuest::complete() {
	cout << name << " Finished\n";
	qstate = Finished;
}

void TalkQuest::printStatus() {
	cout << "Quest Name: " << name << "\nDescription: " << description << "\nState: " << qstate << "\nType: " << qtype << "\n";
}