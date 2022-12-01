#include "../include/Pokemon.h"
#include "../include/Person.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void Player::catchPokemon(Pokemon& target) {
    cout << "You threw a Pokeball at " << target->getPokemonName() << "!" << endl;
    
    //implement some formula to determine the chances of catching the Pokemon, but for now catch rate will be 100%

    for (int i = 0; i < team.size(); i++) {
        if(team.at(i) == nullptr) {
            team.at(i) = target;
            cout << "You caught " << target->getPokemonName() << "!" << endl;
            return;
        }
    }

    cout << "You have no space to add " << target->getPokemonName() << " to your team. You let " << target->getPokemonName() << " go..." << endl;

}