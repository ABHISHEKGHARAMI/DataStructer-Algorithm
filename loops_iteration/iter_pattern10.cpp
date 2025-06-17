// print the pascal triangle for the pattern
/*  
     1
    1 1
   1 2 1
  1 3 3 1
  like this
*/

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main(){
    // user input for the number of line
    int n;
    cout << "enter the number of lines want to print : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // for the over all loop to print the pattern
        for (int j = 0; j < n - i ; j++)
        {
            // for the space calculation
            cout << " ";
        }
        int val = 1;
        for (int j = 0; j <= i; j++)
        {
            // for printing the number pattern
            cout << val <<" ";
            val = val * (i - j) / (j + 1 );
        }
        cout << "\n";
    }
    
    return 0;
}