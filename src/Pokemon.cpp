#include "../include/Pokemon.h"
#include "Person.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

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