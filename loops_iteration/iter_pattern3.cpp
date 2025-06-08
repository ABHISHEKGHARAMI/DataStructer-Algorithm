// Question : Right angle triangle pattern using the number
/*
1
1 2
1 2 3
1 2 3 4 
like that
*/
// including all that libary or modules
#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    // logic for the right angle triangle for the user
    int n;
    int i,j;
    cout << "\nEnter the number of lines pattern want to print : ";
    cin >> n ;
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <=  i ; j++)
        {
            cout << j << "\t";
        }
        cout << "\n";
    }
    return 0;
}