// Exercise 1:

// Create a lambda that takes two ints and returns their product.

// Call it with (5, 10) and print the result.
#include<iostream>
using namespace std;
int main(int argc,char* argv[]){
    // lambda function for the product
    auto product = [=](int x,int y){
        return x * y ;
    };
    // taking the user input from the user
    int x , y;
    cout << "enter the two number : ";
    cin >> x >> y;
    cout << "\nThe product of the tw number is : " << product(x,y);
    return 0;
}