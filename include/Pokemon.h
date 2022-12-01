#ifndef POKEMON_H
#define POKEMON_H
#include <string>
using namespace std;

class Pokemon {
 private:
    string name;
    string nickName;
    enum type {FIRE, WATER, AIR};
    type PokemonType;
    int health;
    int level;
    int experience;
    friend class Person;
 public:
    Pokemon();
    Pokemon(string name, type PokemonType, int health, int level, int experience);
    void attack(Pokemon enemy);
    void addExp();
    void changeHealth(int difference); //used for being damaged/healed
    void setPokemonNickName();
    int getHP();
    int getLvl();
    int getXP();
};

#endif
