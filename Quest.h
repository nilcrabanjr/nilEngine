#pragma once
#include <iostream>
#include <cstddef>

enum QuestState {NotStarted, Started, Finished};
enum QuestType {Generic, Talk, Fetch};

class Quest {
	protected:
		std::string name;
		std::string description;
		QuestState qstate;
		QuestType qtype;
	public:
		Quest(std::string x, std::string y, QuestState z, QuestType q);
		void start();
		void complete();
		void printStatus();
};

class TalkQuest : Quest {
	public:
		TalkQuest(std::string x, std::string y, QuestState z, QuestType q) : Quest(x, y, z, q) {}
		void start();
		void complete();
		void printStatus();
};
