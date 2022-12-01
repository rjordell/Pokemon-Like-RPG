#ifndef POKEMON_H
#define POKEMON_H
#include <string>
using namespace std;

class Pokemon {
 private:
    string ownerName;
    string name;
    enum type {NORMAL, GRASS, FIRE, WATER};
    type PokemonType;
    int health;
    int level;
    int experience;
    friend class Person;
 public:
    Pokemon();
    Pokemon(string ownerName, string name, type PokemonType, int health, int level, int experience);
    void attack(Pokemon enemy);
    void changeHealth(int difference); //used for being damaged/healed
    void setPokemonName();
    string getPokemonName();
    int getHP();
    int getLvl();
    int getXP();
};

#endif
