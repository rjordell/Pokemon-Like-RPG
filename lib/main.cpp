//#include "../include/Pokemon.h"
//#include "../include/Person.h"
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

// g++ -o game -std=c++11 main.cpp

int progress = 0;

void encounterWildPokemon(){
    cout << endl << "*Wild pokemon event*" << endl;
}

void fightNpc(){
    cout << endl << "*trainer/gym leader event*" << endl;
}

void rest(){
    cout << endl << "*rest*" << endl;
}

int quitGame(){
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

int menu(){
    char menuOption;

    cout << endl << "Here is a list of what you can do: " << endl;
    cout << "1. Fight a wild Pokemon" << endl;
    // TODO change this to trainer/gym leader names EG "Fight Trainer John!" or "Fight Gym Leader Roxy!" based on progress in story variable
    if (progress % 4 == 0){
        cout << "2. Fight the gym leader" << endl;
    } else{
        cout << "2. Fight a trainer" << endl;
    }
    cout << "3. Rest" << endl;
    cout << "4. Quit the game" << endl;
    cout << "Please choose an option from 1-4: ";
    cin >> menuOption;
    if (menuOption == '1'){
        encounterWildPokemon();
    } else if (menuOption == '2'){
        fightNpc();
    } else if (menuOption == '3'){
        rest();
    } else if (menuOption == '4'){
        if (quitGame() == 0){
            return 0;
        }
    }
    return 1;
}

int main() {

    bool first = true;
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
    // TODO set starter pokemon object to appropriate starter
    if (startChoice == '1'){
        cout << endl << "You have chosen Charmander! Great choice!" << endl;
    } else if (startChoice == '2'){
        cout << endl << "You have chosen Squirtle! Great choice!" << endl;
    } else if (startChoice == '3'){
        cout << endl << "You have chosen Bulbasaur! Great choice!" << endl;
    }
    while (menu() == 1){

    }
    return 0;
    
}