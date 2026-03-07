#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

double sum(double a, double b) {
    return a + b;
}

int sum(int a, int b, int c) {
    return a + b + c;
}

int main() {

    cout << "Example 1: Function with two integers" << endl;
    cout << "Sum of two integers: " << sum(4, 6) << endl;

    cout << endl;

    cout << "Example 2: Function with two doubles" << endl;
    cout << "Sum of two doubles: " << sum(4.5, 4.0) << endl;

    cout << endl;

    cout << "Example 3: Function with three integers" << endl;
    cout << "Sum of three integers: " << sum(5, 5, 5) << endl;

    return 0;
}