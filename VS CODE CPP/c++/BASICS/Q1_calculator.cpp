#include <iostream>
using namespace std;

int main() {
    int choice;
    int num1, num2;
   

    do {
        cout << "\n Simple Calculator" << endl;
        cout << "1. Addition (+)" << endl;
        cout << "2. Subtraction (-)" << endl;
        cout << "3. Multiplication (*)" << endl;
        cout << "4. Division (/)" << endl;
        cout << "5. Quit" << endl;
        cout << "Choose an operation (1-5): ";
        cin >> choice;

        if (choice == 5) {
            cout << "Exiting calculator. Goodbye!" << endl;
            break;
        }

        if (choice < 1 || choice > 5) {
            cout << "Invalid choice!" << endl;
        } else {
            cout << "Enter first integer: ";
            cin >> num1;

            cout << "Enter second integer: ";
            cin >> num2;

            switch (choice) {
                case 1:
                    cout << "Result: " << num1 + num2 << endl;
                    break;

                case 2:
                    cout << "Result: " << num1 - num2 << endl;
                    break;

                case 3:
                    cout << "Result: " << num1 * num2 << endl;
                    break;

                case 4:
                    if (num2 == 0) {
                        cout << "Error: Division by zero is not allowed." << endl;
                    } else {
                        cout << "Result: " << num1 / num2 << endl; 
                    }
                    break;
            }
        }

    } while (true);

    return 0;
}