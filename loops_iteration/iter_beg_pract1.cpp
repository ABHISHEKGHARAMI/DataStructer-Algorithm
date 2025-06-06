// question : print the even number of 1 - 50 using the loop
#include<iostream>
using namespace std;
int main(){
    cout << "Printing the even number from 1 - 50";
    for (int i = 1; i <= 50; i++)
    {
        // check for the even if found print it to the console
        if(i%2 == 0){
            cout << "\n" << i;
        }
    }
    
    return 0;
}