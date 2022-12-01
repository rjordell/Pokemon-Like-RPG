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

void Player::addToTeam(Pokemon newMember)
{
    for(int i = 0; i < team.size(); i++)
    {
        if(team.at(i).getPokemonName() == "")
        {
            team.at(i) = newMember;
            cout << "Added " << newMember.getPokemonName() << " to the team successfully~" << endl;
            cout << "Do you want to see your team?" << endl;
            string choice;
            if(choice == "YES" || choice == "yes" || choice == "Yes")
            {
                for(int i = 0; i < team.size(); i++)
                {
                    if(i != 0)
                    {
                        cout << ", ";
                    }
                    cout << team.at(i).getPokemonName();
                    
                }
                break;
            }
            else
            {
                break;
            }
            
        }
    }
    //team.push_back(target->getPokemonName());
}

void Player::viewTeam() {
    string underline = "\e[4m";
    string reset = "\e[0m\e[39m\e[49m";
    //cout << underline;
    //team.at(0).displayInfo();
    //cout << reset;
    
    for(int i = 0; i < 3; i++) {
        if (team.at(i).getPokemonName() != ""){
            if (this->active == i){
                cout << underline;
            }
            team.at(i).displayInfo();
        }
    }
}