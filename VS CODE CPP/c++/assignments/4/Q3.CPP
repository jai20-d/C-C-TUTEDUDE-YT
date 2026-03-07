#include <iostream>
using namespace std;

int max_two(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int max = max_two(num1, num2);

    cout << "Maximum number is: " << max;

    return 0;
}