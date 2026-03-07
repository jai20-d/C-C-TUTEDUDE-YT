#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string name;
    int sclass, age;

    ofstream file("student_info.txt");

    cout << "Enter student's name: ";
    cin >> name;

    cout << "Enter student's class: ";
    cin >> sclass;

    cout << "Enter student's age: ";
    cin >> age;

    file << name << ", " << sclass << ", " << age;

    file.close();

    cout << "Data written to student_info.txt";

    return 0;
}