#ifndef POKEMON_H
#define POKEMON_H

#include <string>
using namespace std;

class Pokemon {
   private:
      string name;
      string nickName;
    
      int health;
      int level;
      int experience;
      friend class Person;
   public:
      enum type {FIRE, WATER, EARTH};
      type PokemonType;
      Pokemon();
      void assign(string name, type PokemonType, int health, int level, int experience);
      void attack(Pokemon enemy);
      void changeHealth(int difference); //used for being damaged/healed
      void addExp();
      void setPokemonNickName();
      string getPokemonName();
      void displayInfo();
};

#endif