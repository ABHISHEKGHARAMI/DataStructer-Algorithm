// now printing the pattern
/*
****
 ***
****
 ***
*/

#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout << "enter the number of rows : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i%2 !=0)
        {
           cout <<" ";
           for (int j = 0; j < n - 1 ; j++)
           {
            //  now go for the specific pattern
             cout << "*";
           }
        }else{
            for (int j = 0; j < n; j++)
            {
                // specific pattern
                cout << "*" ; 
            }
            
        }
        cout << "\n" ;
    }
    
    return 0;
}