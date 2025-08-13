// here we go for the unique pointer for the details
/*
first question what are the smart pointer
so when the we declare the pointer manually we have to the free the memory manually but the thing is
many time by mistake the we forget to delete the memory so it could lead the error to the compiler

so there is 3 type of the smart pointer in there
1. unique pointer
2. shared pointer
3. weak pointer

now we discuss about the unique pointer about the ownership about the pointer when it changes it ownership 
the first pointer will be deleted from the memory
*/
#include<memory>
#include<iostream>
#include<stdexcept>
#include"../../log/log_program.hpp"
int main(int argc,char* argv[]){
    LOG_INFO("Program started...");
    std::unique_ptr<int> p1 = std::make_unique<int>(42);
    std::cout<<"The pointer value is :"<<*p1;
    LOG_INFO("The pointer value is : "+std::to_string(*p1));
    // now have to move the ownership of the pointer to see it exists or not for demonstrate purpose
    std::unique_ptr<int> p2 = std::move(p1);
    if (!p1)
    {
        // first owner already destroyed 
        std::cout << "First pointer destroyed..the second pointer value is : " << *p2;
        LOG_INFO("The first owner of the pointer destroyed..after moving the value is : "+std::to_string(*p2));
    }
    
    LOG_INFO("Program ended...");
    return 0;
    // after the calling the memory will be freed auto
}
