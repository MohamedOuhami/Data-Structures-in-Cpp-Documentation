#include <iostream>
#include <set>

using namespace std;

int main()
{

    cout << "Learning sets!" << endl;

    set<int> ages = {5,4,6,7};

    // When printing It, you're gonna see that the values are ordered
    for (auto& age : ages){
        cout << "the age : " << age << endl;
    }

    // By default, the values are sorted in an ascending way
    // If you want to sort in a descending way, we do
    set<int,greater<int>> agesDesc = {5,6,1,8,9,1};

    // When printing It, you're gonna see that the values are ordered
    for (auto& age : agesDesc){
        cout << "the age : " << age << endl;
    }

    // To insert new elements
    ages.insert(10);

    // To remove elements
    ages.erase(5);

    // Get the size of a set
    cout << "The size of the set is " << ages.size() << endl;

    // To get if a set is empty
    cout << "Is the set empty ? " << ages.empty() << endl;

    return 0;
}
