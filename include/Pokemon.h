#ifndef POKEMON_H
#define POKEMON_H
#include <string>
using namespace std;

class Pokemon {
 private:
    string ownerName;
    string name;
    enum type {NORMAL, FIRE, WATER, GRASS, ELECTRIC, ICE, FIGHTING, POISON, GROUND, FLYING, PSYCHIC, BUG, ROCK, GHOST, DRAGON, DARK, STEEL};
    int experience;
    int health;
    friend class Person;
 public:
    void attack(Pokemon enemy);
    void levelUp();
    void addExp();
    void changeHealth(int difference); //used for being damaged/healed
    void setPokemonName();
    string getPokemonName();
    int getHealth();
};

#endif