// here we create and study the different iteration for program for more control of this execution of the program
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    // loops or the iteration can  have 3 types 
    // 1 : for loops
    // 2 : while loops
    // 3 : do - while loops
    //  first while look at the for loop
    cout <<"\n the for loop \n";
    for (int  i = 0; i < 5; i++)
    {
        cout << "\t" << i;
    }
    // second now we look at the while loop
    int i ;
    i = 10;
    cout << "\n the while loop \n";
    while (i > 0)
    {
        cout << "\t" << i;
        i--;
    }
    // third now we look at the do while loop
    cout << "\nthe do while loop \n";
    i = 1;
    do
    {
        cout << "\t" << i;
        i++;
    } while (i < 15);
    
    
    
    return 0;
}