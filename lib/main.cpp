//#include "../include/Pokemon.h"
//#include "../include/Person.h"
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main() {

    bool first = true;
    string playerName;
    char startChoice;


    cout << endl << "Welcome to Pokemon! What is your name?: ";
    cin >> playerName;
    // TODO implement string validation for playerName
    cout << endl << "Hello " << playerName << "! Welcome to Pokemon!" << endl;
    // TODO implement a y/n question here that displays the instructions if yes
    
    cout << endl << "Before you can begin your adventure, you must first choose a starter pokemon." << endl;
    cout << "Here is a list of the starters you can choose from: " << endl;
    cout << "1. Charmander." << endl;
    cout << "2. Squirtle." << endl;
    cout << "3. Bulbasaur." << endl;
    cout << "Please choose a starter from 1-3: ";
    cin >> startChoice;
    // TODO implement string validation for starter
    if (startChoice == '1'){
        cout << endl << "You have chosen Charmander! Great choice!" << endl;
    }else if (startChoice == '2')
    {
        cout << endl << "You have chosen Squirtle! Great choice!" << endl;
    }else if (startChoice == '3')
    {
        cout << endl << "You have chosen Bulbasaur! Great choice!" << endl;
    }
    
}