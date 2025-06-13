#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Quest.h"

enum CharacterStatus { Alive, Dead };

class Character {
protected:
    CharacterStatus status;
    std::string name;
    std::string race;
    int health;
    int maxHealth;
    int attackPower;

public:
    Character(CharacterStatus s, std::string n, std::string r, int h, int mh, int ap);
    virtual ~Character() = default;

    std::string statusToString() const;
    void checkStatus() const;
    void kill();
    std::string getName() const;

    virtual void printCharacter() const = 0;
};

class Player : public Character {
public:
    Player(CharacterStatus s, std::string n, std::string r, int h, int mh, int ap);
    void printCharacter() const override;
};

class NPC : public Character {
protected:
    std::vector<Quest*> npcQuests;

public:
    NPC(CharacterStatus s, std::string n, std::string r, int h, int mh, int ap, std::vector<Quest*> k);
    void printCharacter() const override;
    void printQuests() const;
};
