// here we look for the nested if and else statement for the control
#include<iostream>
using namespace std;
int main(){
    // here we go for the nested if else statement
    int number;
    cout << "enter a number:";
    cin >> number;
    if (number > 0)
    {
        cout << "\n" << number <<"\t is greater than 0";
        if (number % 2 == 0)
        {
            cout << "\n" << number << "\tis even number";
        }
        else{
            cout << "\n"
                 << number << "\tis odd number";
        }
        
    }else{
        cout << "\n" << number <<"\t is less than 0";
    }
    
}