// Exercise 3 : Pointer to char
//                  Create a char variable and a pointer to it.Print the address and the character.
#include<iostream>
#include<sstream>
#include<string>
#include"../../log/log_program.hpp"
using namespace std;
int main(int argc,char* argv[]){
    LOG_INFO("Program started...");
    char ch;
    cout << "enter an char for this assignment : ";
    cin >> ch;
    char* ptr = &ch;
    std::stringstream ss;
    if(ptr != nullptr){
        // check the pointer
        ss << static_cast<const void*>(&ch);
        LOG_INFO("The memory address of the variable is : "+ ss.str());
        cout << "The memory address of the variable is : " << &ch;
        // clear the stream
        ss.str("");
        ss.clear();
        ss << static_cast<const void*>(ptr);
        LOG_INFO("The Pointer address is : " + ss.str());
        cout << "The pointer address is : " << ptr;
        LOG_INFO("The Pointer stores the value of : " + std::string(1,*ptr));
        cout << "The Pointer stores the value of "<< *ptr;
    }
    else{
        LOG_ERROR("The char pointer is not created....");
        cout << "The char pointer is not created....";
    }
    LOG_INFO("Program ended...");
    return 0;
}