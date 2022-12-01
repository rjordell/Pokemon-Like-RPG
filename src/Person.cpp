#include "../include/Pokemon.h"
#include "../include/Person.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

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
        if(team.at(i) == nullptr)
        {
            team.at(i) = newMember;
            cout << "Added " << newMember << " to the team successfully~" << endl;
            cout << "Do you want to see your team?" << endl;
            string choice;
            if(choice == "YES" || choice == "yes" || choice == "Yes")
            {
                for(int i = 0 i < team.size(); i++)
                {
                    if(i != 0)
                    {
                        cout << ", ";
                    }
                    cout << team.at(i);
                    
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

/*void Player::viewTeam() //Ended up adding this to the addToTeam Function
{
    for(int i = 0 i < team.size(); i++)
    {
        if(i != 0)
        {
            cout << ", ";
        }
        cout << team.at(i);
    }
}*/
