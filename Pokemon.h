#ifndef POKEMON_H
#define POKEMON_H
#include <string>
using namespace std;

class Pokemon {
 private:
    string ownerName;
    string name;
    enum type {NORMAL, FIRE, WATER, GRASS, ELECTRIC, ICE, FIGHTINH, POISON, GROUND, FLYING, PSYCHIC, BUG, ROCK, GHOST, DRAGON, DARK, STEEL};
    int experience;
    int health;
 public:
    Pokemon(string ownerName, string name, enum type, int experience, int health);
    void attack(Pokemon enemy);
    void levelUp();
    void addExp();
    void changeHealth(int difference); //used for being damaged/healed
    void setPokemonName();
    string getPokemonName();
    int getHealth();
};

#endif