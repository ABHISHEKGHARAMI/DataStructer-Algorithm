// here we learn about the usage of the smart pointer in the function 
/*
we can use the pointer like the two ways
1. pointers don't take ownership just use the pointer
2. pointer ownership moves to another pointer
here we use the first one just the pointers to not take the ownership just use the function later we move on the 
2nd one.
*/
#include<memory>
#include<iostream>
#include<stdexcept>
#include"../../log/log_program.hpp"

// function for use the smart pointer
void fillArray(std::unique_ptr<int[]>& arr,int n){
//    here we passing the pointer using the reference so it is called the pass by reference
      std::cout << "inserting element :" << std::endl;
      for (int i = 0; i < n; i++)
      {
        std::cout << "enter element : "<<i;
        std::cin >> arr[i];
      }
      
}

// function for the print the array with smart pointer
void printArray(std::unique_ptr<int[]>& arr,int n){
    std::cout << "printing the array.." << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cout<< "element"<<i << ":" << arr[i]<<std::endl;
        LOG_INFO("element["+std::to_string(i)+"] : "+std::to_string(arr[i])); 
    }
    
}
int main(int argc,char* argv[]){
    LOG_INFO("Program started...");
    int n;
    std::cout << "enter the number of the array input"<< std::endl;
    if(!(std::cin >> n)){
        LOG_ERROR("User didn't enter the number of array input so memory can be created..")
        throw std::runtime_error("can't create memory for the array input..");
    }
    std::cout << "Please insert the array input :" << std::endl;
    std::unique_ptr<int[]> arr = std::make_unique<int[]>(n);
    fillArray(arr,n);
    printArray(arr,n);
    LOG_INFO("Program ended..");
    return 0;
}
// after main function returns the pointers will be destroyed