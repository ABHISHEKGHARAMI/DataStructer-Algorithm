// print the following pattern
/*

*
* *
*   *
* * * *

*/
#include<iostream>
using namespace std;
int main(){
    // takes the user input
    int n;
    cout << "enter the number of rows : ";
    cin >> n ;
    for (int i = 0; i < n; i++)
    {
        // overall loop
        for (int j = 0; j <= i ; j++)
        {
            // inner loop for the actual pattern and space printing
            if (i==0 || i == n - 1)
            {
                cout << "*";
            }else{
                if (j==0 || j == i)
                {
                    cout << "*";
                }else{
                    cout << " ";
                }
                
            }
            
        }
        cout << "\n";
    }
    return 0;
}