#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{

    cout << "Learning Deques!" << endl;
    deque<string> cars = {"Volvo","BMW","Seat"};

    // Get the first element
    cout << "The first element : " << cars.front();

    // Get the last element
    cout << "The last element : " << cars.back();

    // Get the 2nd element
    cout << "The 2nd element : " << cars.at(1);

    // Add elements at the front of the queue
    cars.push_front("Mclaren");

    // Add element at the back of the queue
    cars.push_back("Yo mom");

    // We can again pop elements from the back or the front of the queue
    cars.pop_back();

    cars.pop_front();

    return 0;
}
