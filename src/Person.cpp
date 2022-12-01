#include "../include/Pokemon.h"
#include "../include/Person.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

Person::Person() {
    this->name = "";
}

void Person::assign(string name, Pokemon starter) {
    this->name = name;
    team.at(0) = starter;
}

string Person::getName() {
    return this->name;
}

void Player::catchPokemon(Pokemon& target) {
    cout << "You threw a Pokeball at " << target.getPokemonName() << "!" << endl;
    
    //implement some formula to determine the chances of catching the Pokemon, but for now catch rate will be 100%

    for (int i = 0; i < team.size(); i++) {
        if(team.at(i).getPokemonName() == "") {
            team.at(i) = target;
            cout << "You caught " << target.getPokemonName() << "!" << endl;
            return;
        }
    }
    cout << "You have no space to add " << target.getPokemonName() << " to your team. You let " << target.getPokemonName() << " go..." << endl;
}

void Player::addToTeam(Pokemon newMember) {
    for(int i = 0; i < 3; i++) {
        if(team.at(i).level == 0){
            team.at(i) = newMember;
            cout << "Added " << newMember.getPokemonName() << " to the team successfully" << endl;
            team.at(i).setPokemonNickName();
            break; 
        }
    }
}

void Player::viewTeam() {
    string underline = "\e[4m";
    string reset = "\e[0m\e[39m\e[49m";
    cout << endl;
    for(int i = 0; i < 3; i++) {
        if (team.at(i).level != 0){
            if (this->active == i){
                cout << underline;
            }
            team.at(i).displayInfo();
        }
    }
}

void Player::healTeam() {
    for(int i = 0; i < 3; i++) {
        if (team.at(i).level != 0){
            team.at(i).rest();
        }
    }
    cout << endl << "Your team has been healed!" << endl;
}

void Player::addXp(int pkmn) {
    team.at(pkmn).addExp();
}