#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char alphabet;
    cout << "Enter a alphabet: ";
    cin >> alphabet;
    switch(tolower(alphabet)) {
        case 'a':
            cout << alphabet << " is a vowel."<< endl;
            break;
        case 'e':
            cout << alphabet << " is a vowel."<< endl;
            break;
        case 'i':
            cout << alphabet << " is a vowel."<< endl;
            break;
        case 'o':
            cout << alphabet << " is a vowel."<< endl;
            break;
        case 'u':
            cout << alphabet << " is a vowel."<< endl;
            break;
        default:
            cout << "You entered consonant: " << alphabet <<endl;
            break;
    }
    return 0;
}
