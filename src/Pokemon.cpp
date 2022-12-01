#include "../include/Pokemon.h"
#include "../include/Person.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

Pokemon::Pokemon() {
    this->name = "";
    this->PokemonType = FIRE;
    this->nickName = "";
    this->experience = 0;
    this->health = 100;
    this->level;

    
}

string Pokemon::getPokemonName() {
    return this->name;
}

void Pokemon::setPokemonNickName() //supposed to be after choosing starter pokemon
{
    string pokeNick;
    char choice;
    cout << endl << "Would you like to give a nickname to your "<< this->name << "?" << endl;
    cout << endl << "Type 'y' for yes or 'n' for no: ";
    cin >> choice;
    if (choice == 'y') {
        cout << "Please type in a nickname: ";
        cin >> pokeNick;
        cout << endl << "Great name! Have fun on your journey with "<<pokeNick << "!" << endl;
    } else {
        cout << endl << "Have fun on your journey with "<<this->name << "!" << endl;
    }
    this->nickName = pokeNick;
}

void Pokemon::addExp()
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

void Pokemon::assign(string name, type PokemonType, int health, int level, int experience){
    this->name = name;
    this->PokemonType = PokemonType;
    this->health = health;
    this->level = level;
    this->experience = experience;
}
