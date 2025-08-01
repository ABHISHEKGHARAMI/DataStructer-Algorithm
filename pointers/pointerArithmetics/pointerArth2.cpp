// here we go again for the pointer arithmetic for the array here we demonstrate the array 
// handling with the pointer
#include<iostream>
#include<string>
#include<sstream>
#include<stdexcept>
#include"../../log/log_program.hpp"
using namespace std;
int main(int argc,char* argv[]){
    LOG_INFO("Program started!!!");
    int n;
    cout << "enter the number of array element to be insert in the array : ";
    if (!(cin >> n))
    {
        LOG_ERROR("number of array input not given....");
        throw std::runtime_error("number of array input not given....");
    }else{
        int* arr= new int[n];
        try
        {
            // take the array input
            cout << "enter the array input :";
            for (int i = 0; i < n; i++)
            {
                if (!(cin >> arr[i]))
                {
                    // array input not given
                    LOG_ERROR("Proper array input not given...");
                    throw std::runtime_error("Proper array input not given...");
                }
                
            }
            // now declare the pointer and then assignment
            int* ptr = arr;
            cout << "printing the array element in the terminal ::";
            LOG_INFO("printing the array elements in the log :");
            for (int i = 0; i < n; i++)
            {
                cout << *(ptr + i);
                LOG_INFO(std::to_string(*(ptr+i)));
            }
            
            
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            LOG_ERROR("exception occurred : "+ string(e.what()));
        }
        
    }
    
    LOG_INFO("Program ended!!...");
    return 0;
}