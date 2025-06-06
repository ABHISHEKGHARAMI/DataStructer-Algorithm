// here we learn about the nested iteration for the program
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    // here we learn about the nested iteration for the progarm
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "\t" << j;
        }
        cout << "\n";
    }
    // here we learn about the control of the loop or iteration
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i==3 && j==3)
            {
                continue;
            }
            cout << '\t' <<'[' << i << ']' << '[' << j << ']';
        }
        cout <<"\n";
    }
    
    return 0;
}