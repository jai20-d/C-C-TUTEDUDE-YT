#include <iostream>
using namespace std;

class Number {
public:
    int value;

    Number(int v) {
        value = v;
    }

    Number operator + (Number n) {
        Number temp(0);
        temp.value = value + n.value;
        return temp;
    }
};

int main() {
    Number n1(5), n2(10);
    Number result = n1 + n2;

    cout << "First number: " << n1.value << endl;
    cout << "Second number: " << n2.value << endl;
    cout << "Sum using overloaded + operator: " << result.value << endl;

    return 0;
}