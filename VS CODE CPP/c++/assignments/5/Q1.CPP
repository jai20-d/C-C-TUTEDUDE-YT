#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
    char grade;
};

int main() {
    Student s1, s2;

    s1.name = "Jai";
    s1.age = 20;
    s1.grade = 'A';

    s2.name = "Harshit";
    s2.age = 22;
    s2.grade = 'B';

    cout << "Student 1:" << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Grade: " << s1.grade << endl;

    cout << endl;

    cout << "Student 2:" << endl;
    cout << "Name: " << s2.name << endl;
    cout << "Age: " << s2.age << endl;
    cout << "Grade: " << s2.grade << endl;

    return 0;
}