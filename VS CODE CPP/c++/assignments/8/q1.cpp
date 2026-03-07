#include <iostream>
using namespace std;

class Demo
{
public:
    Demo()   // Constructor
    {
        cout << "Constructor called. Object created." << endl;
    }

    ~Demo()  // Destructor
    {
        cout << "Destructor called. Object destroyed." << endl;
    }
};

int main()
{
    Demo obj;   // Object created

    cout << "Inside main function." << endl;

    return 0;   // Object goes out of scope here, destructor runs
}