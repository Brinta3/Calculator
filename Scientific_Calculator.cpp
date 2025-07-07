#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float num1, num2, ans;
    int op;

    cout << "Enter First number:" << endl;
    cin >> num1;
    cout << "Enter Second number:" << endl;
    cin >> num2;

    cout << "\nChoice Table:" << endl;
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cout << "5. Percentage\n6. Square \n7. Cube\n";
    cout << "8. Pi\n9. Modulus (int)\n10. Square Root" << endl;

    cout << "\nEnter your choice: ";
    cin >> op;

    switch (op) {
        case 1:
            ans = num1 + num2;
            break;
        case 2:
            ans = num1 - num2;
            break;
        case 3:
            ans = num1 * num2;
            break;
        case 4:
            if (num2 == 0) {
                cout << "Invalid" << endl;
                return 1;
            }
            ans = num1 / num2;
            break;
        case 5:
            if (num2 == 0) {
                cout << "Invalid" << endl;
                return 1;
            }
            ans = (num1 / num2) * 100;
            break;
        case 6:
            ans = num1 * num1;
            cout << "Square of first number" << endl;
            break;
        case 7:
            ans = num1 * num1 * num1;
            cout << "Cube of first number" << endl;
            break;
        case 8:
            ans = 3.1416;
            break;
        case 9:
            if ((int)num2 == 0) {
                cout << "Invalid" << endl;
                return 1;
            }
            ans = (int)num1 % (int)num2;
            break;
        case 10:
            if (num1 < 0) {
                cout << "Negative number not allowed" << endl;
                return 1;
            }
            ans = sqrt(num1);
            break;
        default:
            cout << "Invalid" << endl;
            return 1;
    }

    cout << "The answer is: " << ans << endl;
    return 0;
}
