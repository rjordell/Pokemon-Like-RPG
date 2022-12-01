#include "Pokemon.h"
#include "Person.h"

#include <iostream>
#include <string>
using namespace std;

Pokemon::Pokemon() {
    this->name = "";
    this->nickName = "";
    this->experience = 0;
    this->health = 100;
    this->PokemonType = FIRE;
}
    
void Pokemon::setPokemonNickName() //supposed to be after choosing starter pokemon
{
    string pokeNick;
    char choice;
    cout << "Would you like to give a nickname to your Pokemon?" << endl;
    cout << endl << "Type 'y' for yes or 'n' for no: ";
    cin >> choice;
    if (choice == 'y'){
        cout << "Please type in a nickname: ";
        cin >> pokeNick;
    }
    cout << endl << "Great name! Have fun on your journey!" << endl;
    this->nickName = pokeNick;
}