#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    cout << "Learning iterators !" << endl;

    vector<string> players {"Bougrine","Benoun","Oueld-Chikh"};

    // Create our iterator
    vector<string>::iterator it;

    // Loop through the players vector
    for (it = players.begin(); it != players.end(); ++it){
        cout << *it << endl;
    }

    // We can iterator in reverse using rbegin() and rend()

    for (auto it = players.rbegin(); it != players.rend();++it){
        cout << *it << endl;
    }

    // The coolest thing about iterators is that we can do multiple operatios on It
    sort(players.begin(),players.end());

    for (auto player : players){
        cout << player << endl;
    }

    // To sort in reverse, we use rbegin and rend
    sort(players.rbegin(),players.rend());

    for (auto player : players){
        cout << player << endl;
    }

    // We can even find elements based on a set of conditions
    auto bougrineIt = find(players.begin(),players.end(),"Bougrine");

    cout << "Found the player : " << *bougrineIt;

    return 0;
}
