// Question 8 : print the pyramid pattern of numbers like
/*
    1
   121
  12321
 1234321

*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    // user input
    int n ; 
    cout << "enter the number lines want to print : ";
    cin >> n ; 
    for (int i = 0; i < n; i++)
    {
        // for overall loop
        for (int j = n - i ; j > 0 ; j-- )
        {
            // space loop for the pattern
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            // number print for the first part of the loop
            cout << k + 1 ;
        }
        for (int l = i - 1  ; l >= 0 ; l-- )
        {
            // for other part of the pyramid for the number
            cout << l + 1 ;
        }
        
        cout << "\n" ;
    }
    return 0;
}