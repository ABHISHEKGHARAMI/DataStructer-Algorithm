// now we learn about the weak pointer now look about the ownership of the pointer
#include <memory>
#include <iostream>
#include <stdexcept>
#include "../../log/log_program.hpp"
int main(int argc, char *argv[]){
    LOG_INFO("Program started ...");
    // making the owner pointer
    std::shared_ptr<int> p1 = std::make_shared<int>(42); // owner
    std::weak_ptr<int> p2 = p1; // observer
    if (auto locked = p2.lock())
    {
        // try to get temporarily ownership
        std::cout << *locked;
        LOG_INFO(std::to_string(*locked));
    }
    p1.reset();
    // release the memory for the owner the observer will delete auto
    if(p2.expired()){
        std::cout<< "memory is deleted..";
        LOG_INFO("memory delete for the observer, when the owner is deleted...");
    }
    LOG_INFO("Program ended..");
    return 0 ;
}