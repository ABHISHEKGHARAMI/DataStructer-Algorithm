// here we learn about the switch statement for the program
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    // here we go for the switch statement
    int day_number;
    cout << "enter the day number :";
    cin >> day_number;
    switch (day_number)
    {
    case 1:
        cout << "\nSunday";
        break;

    case 2:
        cout << "\nMonday";
        break;
    
    case 3:
        cout << "\nTuesday";
        break;

    case 4:
        cout << "\nWednesday";
        break;

    case 5:
        cout << "\nThursday";
        break;

    case 6:
        cout << "\nFriday";
        break;

    case 7:
        cout << "\nSaturday";
        break;
    
    
    default:
        cout << "Wrong Input!!!";
    }
    return 0;
}