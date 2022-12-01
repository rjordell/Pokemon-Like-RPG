#include "../include/Pokemon.h"
#include "../include/Person.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string bold = "\e[1m";
string reset = "\e[0m\e[39m\e[49m";

Pokemon::Pokemon() {

}

void Pokemon::assign(string name, type PokemonType, int health, int maxHealth, int level, int exp, int atkDmg){
    this->name = name;
    this->PokemonType = PokemonType;
    this->health = health;
    this->maxHealth = maxHealth;
    this->level = level;
    this->exp = exp;
    this->atkDmg = atkDmg;
}

void Pokemon::levelUp() {
    level++;
    expNeeded += 125;
    maxHealth += 5;
    atkDmg += 10;
    cout << bold << this->nickName << reset << " leveled up. They are now level " << level << "!" << endl;
}

void Pokemon::addExp() {
    exp += 25;
    cout << endl << bold << this->nickName << reset << " has gained 25 experience points!" << endl;
    if(exp >= expNeeded) {
        levelUp();
    } else {
        cout << bold << this->nickName << reset << " is now " << expNeeded-exp << " points away from leveling up!" << endl;
    }
    
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
        this->nickName = pokeNick;
        cout << endl << "Great name! Have fun on your journey with " << this->nickName << "!" << endl;
    } else {
        this->nickName = this->name;
        cout << endl << "Have fun on your journey with "<<this->name << "!" << endl;
    }
}

string Pokemon::getPokemonName() {
    return this->nickName;
}

void Pokemon::displayInfo() {
    cout << bold << "Lvl " << this->level << ". "<< this->nickName << reset << endl;
    cout << "    " << typeNames[this->PokemonType] << " type " << this->name << endl;
    cout << "    HP: " << health << "/" << maxHealth << ", Attack: " << atkDmg << ", Exp: " << exp << "/" << expNeeded << endl;
}

void Pokemon::rest() {
    this->health = this->maxHealth;
}