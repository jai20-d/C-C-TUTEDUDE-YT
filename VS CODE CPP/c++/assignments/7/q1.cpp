#include <iostream>
using namespace std;

class Base
{
};

class Derived : public Base
{
};

int main()
{
    Base *bp = new Derived();   // Allowed (Derived → Base)

    Derived *dp = new Derived(); // Corrected line

    cout << "Program executed successfully." << endl;

    return 0;
}