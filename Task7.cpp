#include <iostream>
using namespace std;
int main() {
    int month;
    cout << "Enter number of month: ";
    cin>>month;
    switch(month)
    {
    case 1:
        cout<< "Spring" << endl;
        break;
    case 2:
        cout<< "Spring" << endl;
        break;
    case 3:
        cout<< "Spring" << endl;
        break;
    case 4:
        cout<< "Summer" << endl;
        break;
    case 5:
        cout<< "Summer" << endl;
        break;
    case 6:
        cout<< "Summer" << endl;
        break;
    case 7:
        cout<< "Autumn" << endl;
        break;
    case 8:
        cout<< "Autumn" << endl;
        break;
    case 9:
        cout<< "Autumn" << endl;
        break;
    case 10:
        cout<< "Winter" << endl;
        break;
    case 11:
        cout<< "Winter" << endl;
        break;
    case 12:
        cout<< "Winter" << endl;
        break;
    default:
        cout<<"invalid month entered";
        break;
    }
    return 0;
}
