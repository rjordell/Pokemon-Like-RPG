#include "../include/Pokemon.h"
#include "../include/Person.h"
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