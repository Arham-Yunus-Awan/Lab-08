#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char grade;
    cout << "Enter your grade: "<< endl;
    cin >> grade;
    switch(tolower(grade)) {
        case 'a':
            cout << "Excellent!" << endl;
            break;
        case 'b':
            cout << "Good" << endl;
            break;
        case 'c':
            cout << "Nice" << endl;
            break;
        default:
            cout << "Okay..." << endl;
            break;
    }
    return 0;
}
