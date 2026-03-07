#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> myList;

    // Adding elements to the list
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    myList.push_back(40);
    myList.push_back(50);

    cout << "Elements in the linked list:" << endl;

    // Display elements
    for (int x : myList)
    {
        cout << x << endl;
    }

    return 0;
}