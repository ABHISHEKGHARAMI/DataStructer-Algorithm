// here we go for the transfer ownership of the pointer in the function
#include <memory>
#include <iostream>
#include <stdexcept>
#include "../../log/log_program.hpp"
// function for the take the ownership of the moving pointer and print the array
void printArray(std::unique_ptr<int[]> arr,int n){
    // here we moving the ownership of the pointer so this is called the call by move
    std::cout << "printing the array pointer..."<<std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cout<< "element["<<i<<"] : "<< arr[i];
        LOG_INFO("element["+std::to_string(i)+"]" + std::to_string(arr[i]));

    }
    std::cout << "\n";
    
}
int main(int argc, char *argv[]){
    LOG_INFO("Program started...");
    int n;
    std::cout << "enter the number of the array input" << std::endl;
    if (!(std::cin >> n))
    {
        LOG_ERROR("User didn't enter the number of array input so memory can be created..")
        throw std::runtime_error("can't create memory for the array input..");
    }
    std::cout << "Please insert the array input :" << std::endl;
    std::unique_ptr<int[]> arr = std::make_unique<int[]>(n);
    std::cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];
    // here we transfer the ownership of the pointer
    printArray(std::move(arr),n);
    // now lets check array is destroyed or not
    if (!arr)
    {
        // arr destroyed
        std::cout << "Array pointer destroyed..."<< std::endl;
    }
    
    LOG_INFO("Program ended..");
    return 0;
}