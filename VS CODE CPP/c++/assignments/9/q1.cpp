#include <iostream>
using namespace std;

int main()
{
    int num, den;

    cout << "Enter numerator: ";
    cin >> num;

    cout << "Enter denominator: ";
    cin >> den;

    try
    {
        if (den == 0)
            throw den;

        cout << "Result: " << num / den;
    }
    catch (int)
    {
        cout << "Division by zero not possible";
    }

    return 0;
}