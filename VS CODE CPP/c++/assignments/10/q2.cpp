#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file("student_info.txt");
    string line;

    if (!file)
    {
        cout << "Error opening file";
        return 0;
    }

    cout << "Content from 'student_info.txt':" << endl;

    while (getline(file, line))
    {
        cout << line << endl;
    }

    file.close();

    return 0;
}