#include <iostream>
using namespace std;

class Factorial {
public:
    int fact(int n) {
        int result = 1;

        for(int i = 1; i <= n; i++) {
            result = result * i;
        }

        return result;
    }
};

int main() {
    int num;
    Factorial obj;

    cout << "Enter a number: ";
    cin >> num;

    int ans = obj.fact(num);

    cout << "The factorial of " << num << " is: " << ans;

    return 0;
}