#include <iostream>
using namespace std;

class ReverseNumber {
public:
    int reverse(int num) {
        int rev = 0;

        while (num != 0) {
            int digit = num % 10;
            rev = rev * 10 + digit;
            num = num / 10;
        }

        return rev;
    }
};

int main() {
    int number;
    ReverseNumber obj;

    cout << "Enter a number: ";
    cin >> number;

    int result = obj.reverse(number);

    cout << "The reverse of the number is: " << result;

    return 0;
}