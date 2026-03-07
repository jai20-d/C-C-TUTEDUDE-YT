#include <iostream>
using namespace std;

bool checkVote(int age) {
    if (age >= 18)
        return true;
    else
        return false;
}

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (checkVote(age))
        cout << "Eligible to vote";
    else
        cout << "Not eligible to vote";

    return 0;
}