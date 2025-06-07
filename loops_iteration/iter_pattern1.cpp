// Question print the following pattern
/*

*
**
***
****

*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    // user input number of line * 
    int n;
    cout << "\nEnter the number of line to print : ";
    cin >> n;
    int i,j;
    cout <<"\nthe pattern is :\n\n";
    for ( i = 0; i <= n; i++)
    {
        for ( j = 0; j <= i; j++)
        {
            cout << "\t*";
        }
        cout << "\n";
    }
    return 0;
}