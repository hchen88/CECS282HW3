/* Name: Howard Chen
 * ID: 005536087
 * Class: CECS 282
 * Instructor: Professor Minhthong Nguyen
 * Date: 14 October 2018
 * Purpose :  This program prompts user for  in a list of
 * names with their best friends stored as a pointer of Person
 * objects. It also has a counter to keep track of how many
 * best friends each Person has. It then prints out the Names
 * with their assigned Best Friends and popularity count.
 *
 */

#include "Person.hpp"

// default constructor
Person :: Person() {
    name = "default";
    popularity = 0;
}

// constructor with specific name
//intializes popularity to 0
Person :: Person(string name){
    this-> name = name;
    popularity = 0;
}
/** This method sets the best friend pointer for the Person object.
 * @param  bestFriend - the Person pointer to the bestFriend
 */
void Person ::  set_best_friend(Person* bestFriend) {
    this -> bestFriend = bestFriend;
    bestFriend->popularity++;
}
/** This method gets the name of the Person object.
 * @return - name as a string type
 */
string Person :: getName(){
    return this-> name;
}
/**
** This method gets the popularity counter of the Person object.
* @return - popularity counter in integer form
*/
int Person :: getPop(){
    return this->popularity;
}
/**
 ** This method gets the bestFriend name
 * @return -  bestFriend's name as a String
 */
string Person :: getBF(){
    return this-> bestFriend->getName();
}
