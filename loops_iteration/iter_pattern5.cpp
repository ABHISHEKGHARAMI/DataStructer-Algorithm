// Question print the Inverted right triangle
/*

****
***
**
*

*/
#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;
int main(){
    // logic for the printing the *
    // user input for the console
    int n;
    cout << "enter the number of lines : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // her goes the printing the *
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        
        cout << "\n";
    }
    
    
    return 0;
}