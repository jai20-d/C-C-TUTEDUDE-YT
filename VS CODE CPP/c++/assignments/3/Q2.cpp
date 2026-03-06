#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char ch;
    bool found = false;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter a character to search: ";
    cin >> ch;

    for(int i = 0; i<str.length(); i++) {
        if(str[i] == ch) {
            cout << "Character found at position (index): " << i << endl;
            found = true;
            break;
        }
    }

    if(!found) {
        cout << "Character does not exist in the string.";
    }

    return 0;
}