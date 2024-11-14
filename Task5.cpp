#include <iostream>
using namespace std;
int main() {
    int user_choice;
    cout << "Press 1 for deposit, 2 for withdraw, 3 for check balance and 4 to exit: ";
    cin >> user_choice;
    switch (user_choice) {
        case 1:
            cout << "Deposited..." << endl;
            break;
        case 2:
            cout << "Withdrawn..." << endl;
            break;
        case 3:
            cout << "Your balance" << endl;
            break;
        case 4:
            cout << "Exited..." << endl;
            break;
        default:
            cout << "invalid";
            break;
    }
    return 0;
}
