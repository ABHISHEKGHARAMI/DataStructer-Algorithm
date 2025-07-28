// Exercise 5 : Swap Two Integers Using Pointers
//                  Write a function that swaps two integers using their pointers.
#include<iostream>
#include<sstream>
#include<string>
#include"../../log/log_program.hpp"
using namespace std;
void swap(int* a,int* b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
int main(int argc,char* argv[]){
    LOG_INFO("Starting the program ...");
    int a,b;
    cout << "enter any positive integer to swap and get the result :";
    cin >> a >> b;
    LOG_INFO("the first variable is : "+ std::to_string(a) + " the second variable is : " + std::to_string(b));
    swap(&a,&b);
    LOG_INFO("After swapping ....");
    cout << "After swapping the first value is : " << a <<" and the second value is : " << b;
    LOG_INFO("After swapping the value of the first variable is : "+ std::to_string(a)+ " and the value of the second variable is : " + std::to_string(b));
    LOG_INFO("program ended....");
    return 0;
}