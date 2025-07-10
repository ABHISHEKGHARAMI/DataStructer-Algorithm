// Exercise 1:

// Create a lambda that takes two ints and returns their product.

// Call it with (5, 10) and print the result.
#include<iostream>
#include"../../log/log_program.hpp"
using namespace std;
int main(int argc,char* argv[]){
    LOG_INFO("starting the function..");
    // lambda function for the product
    auto product = [=](int x,int y){
        return x * y ;
    };
    // taking the user input from the user
    int x , y;
    cout << "enter the two number : ";
    cin >> x >> y;
    cout << "\nThe product of the tw number is : " << product(x,y);
    LOG_INFO("the product of the two number is : " + std::to_string(product(x,y)));
    LOG_INFO("ending the program..");
    return 0;
}