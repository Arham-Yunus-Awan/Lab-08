#include <iostream>
using namespace std;
int main() {
    float num1, num2;
    char sign;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Enter the operator: ";
    cin >> sign;
    switch(sign) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        default:
            cout << "Invalid operator." << endl;
            break;
    }
    return 0;
}
