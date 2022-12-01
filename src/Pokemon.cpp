#include "Pokemon.h"
#include "Person.h"

#include <iostream>
#include <string>
using namespace std;

Pokemon::Pokemon() {
    this->ownerName = "";
    this->name = "";
    this->experience = 0;
    this->health = 100;
    this->PokemonType = NORMAL;
}

string Pokemon::getPokemonName() 
{
    return this->name;
}
    
void Pokemon::setPokemonName() //supposed to be after choosing starter pokemon
{
    string pokeName;
    cout << "Great choice! What would you like to name your partner?" << endl;
    cin >> pokeName;
    cout << "Great name! Have fun on your journey!" << endl;
    this->name = pokeName;
}