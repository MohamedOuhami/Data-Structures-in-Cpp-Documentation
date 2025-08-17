#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    cout << "Learning Maps!" << endl;

    // This is how we declare a new map
    map<int,string> players = {{34,"Bougrine"},{10,"Oueld-Chikh"}};

    // We can access the element by their key
    cout << "The players of number 34 is : " << players.at(34) << endl;

    // Change the value of an element
    players.at(34) = "Bougrine lwa3r";

    // We can add other elements in 2 ways
    players[13] = "Benoun";
    players.at(7) = "Boulacsout";

    // To remove a certain element by key
    players.erase(13);

    // To remove all elements

    players.clear();
    return 0;
}
