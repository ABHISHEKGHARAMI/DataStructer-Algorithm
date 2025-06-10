// Question 6 : Pattern for the following 
/*
****
 ***
  **
   *
*/
#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    // user input for the number
    int n;
    cout << "enter the number : ";
    cin >> n;
    // overall loop
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < i; k++)
        {
            // loop for the space
            cout << " ";
        }
        
        for (int j = n - i; j > 0; j--)
        {
            // loop for the *
            cout << "*";
        }
        cout << "\n";
    }
    
}