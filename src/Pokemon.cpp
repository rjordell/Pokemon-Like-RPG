#include "../include/Pokemon.h"
#include "../include/Person.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

Pokemon::Pokemon() {
    // this->name = "";
    // this->PokemonType = FIRE;
    // this->nickName = "";
    // this->health = 100;
    // this->maxHealth = 100;
    // this->level;    
    // this->experience = 0;
}

void Pokemon::assign(string name, type PokemonType, int health, int maxHealth, int level, int experience){
    this->name = name;
    this->PokemonType = PokemonType;
    this->health = health;
    this->maxHealth = maxHealth;
    this->level = level;
    this->experience = experience;
}

void Pokemon::levelUp() {
    this->level++;
    cout << this->name << " leveled up. They are level " << this->level << " now!" << endl;
}

void Pokemon::addExp()
{
    this->experience += 25;
    cout << "You have gained 25 experience!";
    if(experience % 25 == 0) {
        levelUp();
    }
    cout << "You have " << this->experience << "experience!" << endl;
}

void Pokemon::setPokemonNickName() 
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

string Pokemon::getPokemonName() {
    return this->name;
}

// void Pokemon::displayInfo() {
//     char choice;
//     cout << "Would you like to know more about " << this->name << "?" << endl;
//     cout << "Type 'y' for yes or 'n' for no: ";
//     cin >> choice;
//     if (choice == 'y') {
//         if (this->nickName == "") {
//             cout << "Nickname: N/A" << endl;
//         }
//         else {
//             cout << "Nickname: " << this->nickName << endl;
//         }
//         cout << "Type: " << this->type << endl;
//         cout << "Health: " << this->health << endl;
//         cout << "Level: " << this->level << endl;
//         cout << "Experience: " << this->experience << endl;
//     }
//     else {
//         cout << "Okay. Good luck!" << endl;
//     }
// }

void Pokemon::displayInfo() {
    string bold = "\e[1m";
    string reset = "\e[0m\e[39m\e[49m";
    if (this->nickName == "") {
        cout << bold << "Lvl " << this->level << ". "<< this->name << reset << endl;
        cout << "    " << typeNames[this->PokemonType] << " type " << this->name << endl << "    HP: " << this->health << "/" << this->maxHealth << " Exp: " << this->experience << "/100" << endl;
    }
    else {
        cout << bold << "Lvl " << this->level << ". "<< this->nickName << reset << endl;
        cout << "    " << typeNames[this->PokemonType] << " type " << this->name << endl << "    HP: " << this->health << "/" << this->maxHealth << " Exp: " << this->experience << "/100" << endl;
    }
}
