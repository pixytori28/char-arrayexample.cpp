//this is practice from a tutorial from the thenewboston channel via youtube. 
//these tutorials are helping me understand more about arrays when initialized and with char.

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;

int main() {

    char name[20];
    char sport[20];

    cin.getline(name, 20); //getline is a function that allows the user to enter text.
    cin.getline(sport, 20);
    //name and sport are parameters. 20 from both lines is also a parameter.


    cout << name << " loves " << sport << endl;
    //the above line will print "x name loves x sport" when the user enters a name and sport
    //ex output: vicky loves soccer.

    cin.get();

    return 0;

}