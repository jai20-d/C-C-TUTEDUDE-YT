#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int freq[256] = {0};  

    cout << "Enter a string: ";
    getline(cin, str);

    for(int i = 0; i < str.length(); i++) {
        freq[str[i]]++;
    }

    cout << "Duplicate characters are: ";

    
    for(int i = 0; i < str.length(); i++) {
        if(freq[str[i]] > 1) {
            cout << str[i] << " ";
            freq[str[i]] = 0;  
        }
    }

    return 0;
}