//  Exercise 2: Modify Value Through Pointer
// Change the value of a variable using only its pointer.
#include<iostream>
#include<string>
#include<sstream>
#include"../../log/log_program.hpp"
using namespace std;
int main(int argc,char* argv[]){
    LOG_INFO("Program started...");
    int m;
    cout << "enter an integer for the showcasing the assignment : ";
    cin >> m;
    std :: stringstream ss;
    ss << &m;
    cout << "the variable is stored in the memory location of : " << &m;
    LOG_INFO("the variable is stored in the memory location of : " + ss.str());
    // no we declare the pointer
    int *ptr = &m;
    // & is referencing operator
    // * is called the dereferencing operator
    if (ptr != nullptr)
    {
    //   clear the stream
    ss.str("");
    ss.clear();
    ss << ptr;
    LOG_INFO("Pointer declared");
    cout << "the pointer is referencing at the memory location of : "<< ptr;
    LOG_INFO("the pointer is referencing at the memory location of : " + ss.str());
    cout << "the pointer is the referencing the value of : " << *ptr;
    LOG_INFO("the value of the pointer is : " + std::to_string(*ptr));
    // now have to change the value of the pointer using the pointer
    cout << "enter the new value to be stored in the same memory : ";
    cin >> *ptr;
    cout << "the new value of the pointer stored is : "<< *ptr;
    LOG_INFO("the new value pointer referencing is : " + std::to_string(*ptr));
    cout << "the memory location of the pointer is : " << ptr;
    LOG_INFO("the memory location of the pointer is : " + ss.str());
    ss.str("");
    ss.clear();
    ss<<&m;
    cout << "lets check the memory address of the variable is " << &m;
    LOG_INFO("the memory address of the variable is : " + ss.str());
    cout << "the value stored in the memory address is : " << m ;
    LOG_INFO("the value stored in the variable is : " + std::to_string(m));

    }else{
        cout << "the pointer can't be declared";
        LOG_ERROR("the pointer can't be declared");
    }
    LOG_INFO("Program ended ..");
    return 0;
}