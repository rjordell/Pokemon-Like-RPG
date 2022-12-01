#include "Pokemon.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Person {
   private:
      string name;
   public:
      vector<Pokemon> team = vector<Pokemon>(3);
      Person();
      void assign(string name, Pokemon starter);
      string getName();
};

class Player : public Person {
   private:
   
   public:
      int active = 0;
      void catchPokemon(Pokemon& target);
      void addToTeam(Pokemon newMember);
      void commandPokemon(Pokemon actionPokemon);
      void setName();
      void viewTeam();
      void healTeam();
      void addXp(int pkmn);
};