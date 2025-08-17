#include <iostream>
#include <vector>
#include <string>
#include <list>

using namespace std;

int main()
{
    cout << "Learning Vectors!" << endl;

    // To create a vector, we type vector<type> vectorName;
    vector<string> playerNames {"Oueld-Chikh","Benoun","Dahhak"};

    // Then you can loop through the elements of the vector
    for (auto& playerName:playerNames){
        cout << "The player's name : " << playerName << endl;
    }

    // We can even access an element in a vector by using its index
    cout << "This is the players first elements : " << playerNames[0] << endl;

    // The vectors also present other functions to help get values like front(), back() and at()
    cout << "The first element : " << playerNames.front() << endl;

    cout << "The last element : " << playerNames.back() << endl;

    // The at is preferred over [] because It gives you an error if It didn't find the object
    cout << "Element at index 3 : " << playerNames.at(2) << endl;

    // We can change values just by specifying the index and give It a new value
    playerNames.at(2) = "Chraibi";

    cout << "The new element at index 2 : " << playerNames.at(2) << endl;

    // Adding or removing values is done typically from the end of the vector

    playerNames.push_back("Orkoma");

    cout << "The new vector of players : " << endl;

    for (auto& playerName:playerNames){
        cout << "The player's name : " << playerName << endl;
    }

    playerNames.pop_back();


    cout << "The new vector of players : " << endl;

    for (auto& playerName:playerNames){
        cout << "The player's name : " << playerName << endl;
    }

    // We can check the size of a vector
    cout << "In your vector, you have " << playerNames.size() << " players" << endl;

    // We can also check whether a vector is empty ( 0 if false, 1 if true )
    cout << "Is my vector empty ? " << playerNames.empty() << endl;

    return 0;
}
