// now we learn about the shared smart pointer and its ownership of the program
#include<memory>
#include<iostream>
#include<stdexcept>
#include"../../log/log_program.hpp"
int main(int argc,char* argv[]){
    LOG_INFO("Program started...");
    std::shared_ptr<int> p1 = std::make_shared<int>(42);
    {
        std::shared_ptr<int> p2 = p1;
        // now check the use count of the first pointer
        std::cout << "The use count of the first pointer is : "<< p1.use_count();
        LOG_INFO("The use count of the first pointer is : "+ std::to_string(p1.use_count())+" and the value is : " + std::to_string(*p1));
    }
    // after this come out of the scope the second pointer will be deleted
    std::cout << "The use count of the first pointer is : "<<p1.use_count();
    LOG_INFO("The use count of the first pointer is : "+ std::to_string(p1.use_count()));
    LOG_INFO("Program ended...");
    return 0;
}