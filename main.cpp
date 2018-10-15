//
//  main.cpp
//  Hw3
//
//  Created by Howard Chen on 10/12/18.
//  Copyright © 2018 Howard Chen. All rights reserved.
//

#include <iostream>
#include "Person.hpp"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    string nameString = ""; // name of Person to create
    vector<Person*> personList; // vector of Person pointers
    while (nameString != "done"){ // loops until user enters "done"
        // Prompts user for Names
        cout << "Enter in a list of names and \"done\" when finsihed: " << endl;
        cin >> nameString; // stores name into string variable
        if(nameString != "done"){ // does not store when user enteres "done"
            personList.push_back(new Person(nameString)); // adds each Person object pointer  to List
        }
    }
    // iterates through PersonList to prompt user to enter in a Best Friend for each Person
    for( int i = 0; i < personList.size(); i++ ) {
        cout << "Enter a best friend for " << personList[i]->getName() << endl;
        cin >> nameString;
        
        // Loops theough to find matching names entered
        for (int j = 0; j< personList.size(); j++) {
            if (personList[j]->getName() == nameString){
                personList[i]->set_best_friend(personList[j]);
            }
        }
    }
    // loops through personList to print out all information
    // Prints Name, Best Friend, Popularity
    for (int i = 0; i < personList.size(); i++ ) {
        cout << "Name: " << personList[i]->getName()
        << endl <<"Best Friend: " <<  personList[i]->getBF()
        << endl << "Popularity: "<< personList[i]->getPop()
        << endl<< "--------------" << endl;
    }
    return 0;
}
