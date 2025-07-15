// write a c++ program to check the a even number or odd number
#include<iostream>
#include<stdexcept> // std : error try acatch scernio i am thinking
#include<climits>  // for the max number
#include"../../log/log_program.hpp"
using namespace std;
int main(int argc,char* argv[]){
    LOG_INFO("Starting the program...\n");
    auto checkEven = [=](int n){
    if(n == INT_MAX){
        throw runtime_error("Infinity number...");
        LOG_ERROR("dealing with the maximum number");
    }else{
       return (n%2) ? 1:0;
     }
       
    };
    int n;
    try
    {
        // user input for a number
        cout << "enter a number to check it eben or odd : ";
        if(!(cin >> n)){
            throw runtime_error("input not taken");
            LOG_ERROR("user input not given");
        }
        int result = checkEven(n);
        if (result == 1)
        {
            cout << " \n" << n << " is a even number . ";
            LOG_INFO(std::to_string(n) + " is a even number");
        }else{
            cout << "\n" << n << " is an odd number";
            LOG_INFO(std::to_string(n)+ " is an odd number.");
        }
        

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        LOG_WARN("\nException : "+ string(e.what()));
    }
    LOG_INFO("Program finished..");
    return 0;
}