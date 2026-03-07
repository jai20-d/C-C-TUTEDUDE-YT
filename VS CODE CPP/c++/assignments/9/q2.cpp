#include <iostream>
using namespace std;

int main()
{
    int num;
    char ch;

    try
    {
        cout << "Enter an integer: ";
        cin >> num;

        if (cin.fail())
            throw 1;

        cout << "Valid integer entered: " << num << endl;
    }
    catch (int)
    {
        cout << "Invalid integer input!" << endl;
        cin.clear();
        cin.ignore(100, '\n');
    }

    try
    {
        cout << "Enter a character: ";
        cin >> ch;

        if (isdigit(ch))
            throw ch;

        cout << "Valid character entered: " << ch << endl;
    }
    catch (char)
    {
        cout << "Invalid character input!" << endl;
    }

    return 0;
}