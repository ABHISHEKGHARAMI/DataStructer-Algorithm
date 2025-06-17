#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(){
    // user input
    int n;
    cout << "enter the number of rows in the box : ";
    cin >> n ;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n ; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    
    return 0;
}