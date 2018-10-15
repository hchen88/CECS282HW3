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

#ifndef Person_hpp
#define Person_hpp
#include <string>

using namespace std;

class Person {
public:
    Person();
    Person( string name);
    void set_best_friend(Person* bestFriend);
    string getName();
    int getPop();
    string getBF();


private:
    string name;
    Person* bestFriend;
    int popularity;
    
};
#endif /* Person_hpp */
