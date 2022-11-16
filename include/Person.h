#include "../include/Pokemon.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person {
 private:
    string name;
    vector<Pokemon *> team(5, nullptr);
 public:
    Person(string name);
    virtual void setPersonName() = 0;;
    string getPersonName();
};

class Player : public Person {
 private:

 public:
    void viewTeam();
    void catchPokemon(Pokemon& target);
    void addToTeam(Pokemon newMember);
    void commandPokemon(Pokemon actionPokemon);
};