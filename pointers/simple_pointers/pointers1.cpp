// here we practice what we learn in the pointers for the sake of the god
// question 1: how do we create the pointers
#include<iostream>
#include<sstream>
#include"../../log/log_program.hpp"
#include<string>
using namespace std;
int main(int argc,char* argv[]){
    int m = 10;
    LOG_INFO("Program started");
    // now we print the location of the memory address of the variable
    cout << "the memory address of the variable is : "<< &m;
    std::stringstream ss;
    ss << &m;
    LOG_INFO("the memory address of the variable is : " + ss.str());
    cout << "the value of the variable is : " << m;
    LOG_INFO("the variable value is : " + std::to_string(m));
    // now we declare the pointers to the address of the variable with the reference of the variable
    int* ptr = &m;
    if (ptr != nullptr)
    {
        // if the pointer is not not the null
        // clean the stream  before reuse it
        ss.str("");
        ss.clear();
        
        ss << ptr;
        cout << "pointer declared at the memory address of the memory : " << ptr;
        LOG_INFO("Pointer declared at the memory of : " + ss.str());
        cout << "The value the pointer referencing is : " << *ptr;
        LOG_INFO("The value pointer referencing is : " + std::to_string(*ptr));
    }else{
        // some hardware issue or memory can not be allocated for the address of the pointer
        cout << "Pointer is empty or can not allocate the require memory of the pointer";
        LOG_ERROR("Pointer is empty or can not allocate the require memory of the pointer");
    }
    
    return 0;
}