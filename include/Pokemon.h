#ifndef POKEMON_H
#define POKEMON_H

#include <string>
using namespace std;

class Pokemon {
   private:
      string name;
      string nickName;
    
      
      friend class Person;
   public:
      int health;
      int maxHealth;
      int level;
      int exp;
      int expNeeded = 100;
      int atkDmg = 20;
      enum type {FIRE, WATER, EARTH};
      type PokemonType;
      const char *typeNames[3] = { "Fire", "Water", "Earth" };
      Pokemon();
      void assign(string name, type PokemonType, int health, int maxHealth, int level, int exp, int atkDmg);
      void attack(Pokemon enemy);
      void changeHealth(int difference); //used for being damaged/healed
      void rest();
      void levelUp();
      void addExp();
      void setPokemonNickName();
      string getPokemonName();
      void displayInfo();
};

#endif