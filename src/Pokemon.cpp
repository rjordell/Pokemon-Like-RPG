#include "../include/Pokemon.h"
#include "../include/Person.h"
#include <iostream>
#include <string>
#include <vector>

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

void addExp()
{
    int experience;
    experience = experience + 25;
    cout << "You have gained 25 experience!";
    if(experience % 25 == 0)
    {
        level++;
    }
    cout << "You have " << experience << "exp!" << endl;

}