// here we learn about the jump statement for program
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    // here we go for the different jump statement
    // break statement
    cout << "Displaying the hard jump break" <<"\n";
    for (int i = 0; i < 5; i++)
    {
        if (i==3)
        {
            // here if the condition is met then the entire iteration breaks and comes out of the iteration
            break;
        }
        cout << "\n" << i ;
    }
    // but here the output will be like 0 1 2
    // next level of jump statement is like soft jump and it is the continue
    // the difference is the it does not break the iteration , when the condition is met then only break that 
    // the iteration
    cout<< "displaying the soft jump of continue:" << "\n";
    for (int i = 0; i < 5; i++)
    {
        if (i==3)
        {
            continue;
        }
        cout << "\n" << i;
    }
//    so the output will be 0 1 2 4
    
    return 0;
}