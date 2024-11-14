#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char signal_value;
    cout << "Enter R, G or Y: ";
    cin >> signal_value;
    switch(toupper(signal_value)) {
        case 'G':
            cout << "Go!" << endl;
            break;
        case 'R':
            cout << "Stop" << endl;
            break;
        case 'Y':
            cout << "Slow down" << endl;
            break;
        default:
            cout << "wrong input"<< endl;
            break;
    }
    return 0;
}
