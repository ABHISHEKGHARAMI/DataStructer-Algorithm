// Print the diamond pattern
/*
    *
    **
   ***
   ****
    ***
    **
    *
*/
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(){
    // user input
    int n;
    cout << "enter the number of rows , of the half rows of the pyramid : ";
    cin >> n ; 
    // overall loop for the upper half of the pyramid
    for (int i = 0; i < n; i++)
    {
        // for space
        for (int j = 0; j < n -i -1; j++)
        {
            cout << " ";
        }
        // for printing the *
        for (int k = 0; k < 2*i + 1; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    // lower half
    for (int i = n - 2;i >= 0 ; i--)
    {
        // printing the space
        for (int j = 0 ; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // printing the *
        for (int k = 0; k < 2*i + 1 ; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    
    
    return 0;
}