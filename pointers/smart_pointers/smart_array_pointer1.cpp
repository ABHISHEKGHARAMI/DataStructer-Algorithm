// here we go for the smart pointer how to use them in the array to create or traverse them 
// have a look
#include<memory>
#include<iostream>
#include<stdexcept>
#include"../../log/log_program.hpp"
int main(int argc,char* argv[]){
    LOG_INFO("Program started...");
    int n;
    std::cout << "enter the number of array elements to have :"<< std::endl;
    if (!(std::cin >> n))
    {
        // throws exceptions
        LOG_ERROR("user did't enter the number of element to enter memory can be created...");
        throw std::runtime_error("memory can't created for the array pointer");
    }else{
        std::unique_ptr<int[]> arr = std::make_unique<int[]>(n);
        if (!arr)
        {
            // pointer is not created then throw an error
            LOG_ERROR("Array pointer can not created..");
            throw std::runtime_error("Array pointer can not created...");
        }
        else{
            std::cout<< "enter the array element to insert in the array : "<< std::endl;
            for (int i = 0; i < n; i++)
            {
                // taking input
                std::cout  << "enter array element" << i + 1 << std:: endl;
                if (!(std::cin >> arr[i]))
                {
                    // throw error
                    LOG_ERROR("wrong input taken...");
                    throw std::runtime_error("wrong input taken");
                }
                
            }
            std::cout << "have a look at this array .." << std::endl;
            // traverse the array pointer
            for (int i = 0; i < n; i++)
            {
                std::cout << "element["<<i+1<<"] : " << arr[i];
                LOG_INFO("element["+std::to_string(i)+"] : "+ std::to_string(arr[i]));
            }
            
               
        }
        
    }
    
    LOG_INFO("Program ends...");
    return 0;
}