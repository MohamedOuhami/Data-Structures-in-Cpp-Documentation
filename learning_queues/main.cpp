#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{

    cout << "Learning Qeueus!" << endl;

    queue<string> supermarketClients;

    supermarketClients.push("Ouhami"); // Push Ouhami to the last element
    supermarketClients.push("Bassma"); // Push Bassma to the last element
    supermarketClients.push("Daoudi"); // Push Daoudi to the last element
    supermarketClients.push("Najat"); // Push Najat to the last element

    // Getting the element in the back of the queue
    cout << "The element in the back of the queue : " << supermarketClients.back() << endl;

    // Getting the element in the front of the queue
    cout << "The element in the front of the queue : " << supermarketClients.front() << endl;
    return 0;
}
