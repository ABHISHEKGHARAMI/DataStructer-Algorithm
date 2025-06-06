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
    
    return 0;
}