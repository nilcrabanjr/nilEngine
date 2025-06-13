#include "Character.h"
#include <iostream>
using namespace std;

Character::Character(CharacterStatus s, string n, string r, int h, int mh, int ap)
    : status(s), name(n), race(r), health(h), maxHealth(mh), attackPower(ap) {}

string Character::statusToString() const {
    switch (status) {
    case Alive: return "Alive";
    case Dead: return "Dead";
    default: return "Unknown";
    }
}

void Character::checkStatus() const {
    cout << statusToString();
}

void Character::kill() {
    status = Dead;
}

string Character::getName() const {
    return name;
}

Player::Player(CharacterStatus s, string n, string r, int h, int mh, int ap)
    : Character(s, n, r, h, mh, ap) {}

void Player::printCharacter() const {
    cout << "[Player] " << status << " " << statusToString() << "\n"
        << name << "\n"
        << race << "\n"
        << health << "\n"
        << maxHealth << "\n"
        << attackPower << "\n";
}

NPC::NPC(CharacterStatus s, string n, string r, int h, int mh, int ap, vector<Quest*> k)
    : Character(s, n, r, h, mh, ap), npcQuests(k) {}

void NPC::printCharacter() const {
    cout << "[NPC] " << status << " " << statusToString() << "\n"
        << name << "\n"
        << race << "\n"
        << health << "\n"
        << maxHealth << "\n"
        << attackPower << "\n";
}

void NPC::printQuests() const {
    cout << "Quests for " << name << ":\n";
    if (npcQuests.empty()) {
        cout << "  (No quests assigned)\n";
        return;
    }
    for (size_t i = 0; i < npcQuests.size(); ++i) {
        cout << "[" << i + 1 << "] ";
        npcQuests[i]->printStatus();
    }
}
