#include <iostream>
#include <cmath>
using namespace std;

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

double power(double a, double b) {
    return pow(a, b);
}

int main() {
    double num1, num2;
    char op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Enter operator (+, -, *, /, ^): ";
    cin >> op;

    if (op == '+')
        cout << "Result: " << add(num1, num2);
    else if (op == '-')
        cout << "Result: " << subtract(num1, num2);
    else if (op == '*')
        cout << "Result: " << multiply(num1, num2);
    else if (op == '/')
        cout << "Result: " << divide(num1, num2);
    else if (op == '^')
        cout << "Result: " << power(num1, num2);
    else
        cout << "Invalid operator";

    return 0;
}