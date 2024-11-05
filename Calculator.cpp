#include <iostream>
#include <cmath>
using namespace std;
void show()
{
    cout << "Scientific Calculator" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Sine" << endl;
    cout << "6. Cosine" << endl;
    cout << "7. Tangent" << endl;
    cout << "8. Logarithm (base 10)" << endl;
    cout << "9. Natural Logarithm (ln)" << endl;
    cout << "10. Exponentiation (x^y)" << endl;
    cout << "0. Exit" << endl;
}
int main() {
    int choice;
    double num1, num2;
    do {
        show();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 * num2 << endl;
                break;
            case 4:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                if (num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero is not allowed." << endl;
                break;
            case 5:
                cout << "Enter the angle in radians: ";
                cin >> num1;
                cout << "Result: " << sin(num1) << endl;
                break;
            case 6:
                cout << "Enter the angle in radians: ";
                cin >> num1;
                cout << "Result: " << cos(num1) << endl;
                break;
            case 7:
                cout << "Enter the angle in radians: ";
                cin >> num1;
                cout << "Result: " << tan(num1) << endl;
                break;
            case 8:
                cout << "Enter the number: ";
                cin >> num1;
                if (num1 > 0)
                    cout << "Result: " << log10(num1) << endl;
                else
                    cout << "Error: Logarithm is undefined for non-positive numbers." << endl;
                break;
            case 9:
                cout << "Enter the number: ";
                cin >> num1;
                if (num1 > 0)
                    cout << "Result: " << log(num1) << endl;
                else
                    cout << "Error: Logarithm is undefined for non-positive numbers." << endl;
                break;
            case 10:
                cout << "Enter the base and the exponent: ";
                cin >> num1 >> num2;
                cout << "Result: " << pow(num1, num2) << endl;
                break;
            case 0:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
        cout << endl;
    } while (choice != 0);

    return 0;
}
