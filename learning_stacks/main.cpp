#include <iostream>
#include <stack>

using namespace std;

int main()
{
    cout << "Learning Stack!" << endl;

    stack<string> teams;

    // We cannot define the elements at the time of declaration, we add them later
    teams.push("OCS");
    teams.push("IRT");
    teams.push("MAS");
    teams.push("RCA");

    // Here, the top element will be RCA as It is the last one entering the stack
    cout << "The top element of the stack " << teams.top() << endl;

    // We can also change the value of the top value
    teams.top() = "RCA The best team";
    cout << "The top element of the stack " << teams.top() << endl;

    // Go on and add a new element on top
    teams.push("WC");
    cout << "The top element of the stack " << teams.top() << endl;

    // Now, we gonna delete It
    teams.pop();
    cout << "The top element of the stack " << teams.top() << endl;

    // We can get the size and if a stack is empty like lists and vectors
    cout << "The size of the stack is : " << teams.size() << endl;

    cout << "Is the stack empty ? " << teams.empty() << endl;
    return 0;
}
