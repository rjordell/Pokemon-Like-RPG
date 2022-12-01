#include "../include/Pokemon.h"
#include "../include/Person.h"
#include <iostream>
#include <string>
#include <vector>

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