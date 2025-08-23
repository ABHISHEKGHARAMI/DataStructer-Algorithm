// though we introduce the array non -primitive data structure before lets officially practice it.
#include<iostream>
#include<stdexcept>
#include<string>
#include"../log/log_program.hpp"
int main(int argc,char* argv[]){
    // lets take a simple program to understand the array
    // what we gonna do take user input from the user and print it
    int n;
    // use more security for the data
    try
    {
        // take the user input
        std::cout << "enter the number of input should the array take : " << std::endl;
        if (!(std::cin>>n))
        {
            LOG_ERROR("User does not give input .");
            throw std::runtime_error("user does not give the input");
        }
        // create the array pointer
        int* array = new int[n];
        std::cout << "enter the array input : "<< std::endl;
        for (int i = 0; i < n; i++)
        {
            if (!(std::cin>>array[i]))
            {
                LOG_ERROR("User does not give  array input .");
                throw std::runtime_error("user does not give the array input");
            }
            
        }
        // after this try to print the array in display or terminal
        for (int i = 0; i < n; i++)
        {
            std::cout<< "array[" << i << "] : "<< std::to_string(array[i]) << std::endl;
            LOG_INFO("array["+ std::to_string(i) +"] : " + std::to_string(array[i]));
        }
        // after all of this operation we delete array pointer from the memory
        // due to this in this scope i declared the array thats why have to delete here
        delete[] array;
        
        
        
    }
    catch(const std::exception& e)
    {
        LOG_ERROR("Exception occurred : "+ std::string(e.what()));
        std::cerr << e.what() << '\n';
    }
    
    
    return 0;
}