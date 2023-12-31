#include "../include/Pokemon.h"
#include "../include/Person.h"

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

// g++ -o game -std=c++11 Person.cpp Pokemon.cpp main.cpp

int progress = 1;
Pokemon starter;
Pokemon pkmn2;
Pokemon pkmn3;
Player user;
int temp = 0;

void encounterWildPokemon() {
    if (temp == 0){
        user.addToTeam(pkmn2);
    } else if (temp == 1){
        user.addToTeam(pkmn3);
        
    } else {
        user.addXp(user.active); 
    }
    temp++;
    
}

void fightNpc() {
    cout << endl << "*trainer/gym leader event*" << endl;
}

void rest() {
    user.healTeam();
}

void viewTeam() {
    user.viewTeam();
}

void switchActive() {
    int newActive;
    user.viewTeam();
    cout << "Please choose a Pokemon from 1-3 to make your new active Pokemon: ";
    cin >> newActive;
    user.active = newActive - 1;
}

int quitGame() {
    char choice;
    cout << endl << "Do you really want to quit the game and lose all your progress?";
    cout << endl << "Type 'y' for yes or 'n' for no: ";
    cin >> choice;
    if (choice == 'y'){
        cout << endl << "Goodbye!" << endl;
        return 0;
    }
    return 1;
}

int menu() {
    char menuOption;

    cout << endl << "Here is a list of what you can do: " << endl;
    cout << "1. Catch a wild Pokemon" << endl;
    // TODO change this to trainer/gym leader names EG "Fight Trainer John!" or "Fight Gym Leader Roxy!" based on progress in story variable
    if (progress % 3 == 0){
        cout << "2. Fight the gym leader" << endl;
    } else{
        cout << "2. Fight a trainer" << endl;
    }
    cout << "3. Rest" << endl;
    cout << "4. View your Team" << endl;
    cout << "5. Switch your active Pokemon" << endl;
    cout << "6. Quit the game" << endl;
    cout << "Please choose an option from 1-6: ";
    cin >> menuOption;
    if (menuOption == '1'){
        encounterWildPokemon();
    } else if (menuOption == '2'){
        fightNpc();
    } else if (menuOption == '3'){
        rest();
    } else if (menuOption == '4'){
        viewTeam();
    } else if (menuOption == '5'){
        switchActive();
    } else if (menuOption == '6'){
        if (quitGame() == 0){
            return 0;
        }
    }
    return 1;
}

int main() {
    string playerName;
    char startChoice;

    cout << "Welcome to Pokemon! What is your name?: ";
    cin >> playerName;
    // TODO implement string validation for playerName
    cout << endl << "Hello " << playerName << ", welcome to Pokemon!" << endl;
    // TODO implement a y/n question here that displays the instructions if yes

    cout << endl << "Before you can begin your adventure, you must first choose a starter pokemon." << endl;
    cout << "Here is a list of the starters you can choose from: " << endl;
    cout << "1. Charmander" << endl;
    cout << "2. Squirtle" << endl;
    cout << "3. Bulbasaur" << endl;
    cout << "Please choose a starter from 1-3: ";
    cin >> startChoice;
    // TODO implement string validation for starter
    if (startChoice == '1'){
        starter.assign("Charmander", Pokemon::type::FIRE, 10, 100, 1, 0, 20);
    } else if (startChoice == '2'){
        starter.assign("Squirtle", Pokemon::type::WATER, 10, 100, 1, 0, 20);
    } else if (startChoice == '3'){
        starter.assign("Bulbasaur", Pokemon::type::EARTH, 10, 100, 1, 0, 20);
    }
    starter.setPokemonNickName();
    user.assign(playerName, starter);
    pkmn2.assign("Pikachu", Pokemon::type::FIRE, 10, 60, 1, 0, 20);
    pkmn3.assign("Diglett", Pokemon::type::EARTH, 10, 120, 1, 0, 20);
    while (menu() == 1){

    }
    return 0;
}