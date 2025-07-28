// ✅ Exercise 6 : Pointer with Array
//                     Declare an array and iterate through it using a pointer instead of indexing.

//                 cpp
//                     Copy
//                         Edit int arr[] = {1, 2, 3, 4, 5};
// int *ptr = arr;
#include<iostream>
#include<string>
#include<sstream>
#include<stdexcept>
#include"../../log/log_program.hpp"
using namespace std;
int main(int argc,char* argv[]){
    LOG_INFO("starting the program...");
    int n;
    cout << "enter the number of array want to allocate : ";
    if (!(cin >> n))
    {
        // if input not given then in log show the error
        LOG_ERROR("Proper array input is not given..");
    }else{
        try
        {
            // declare the array
            int *ptr = new int[n];
            cout << "enter the array elements : ";
            for (int i = 0; i < n; i++)
            {
                // check array input is given properly or not
                if (!(cin >> ptr[i]))
                {
                    // declare error in the log
                    LOG_ERROR("Array input properly not given");
                }
                
            }
            // if array input given properly then display the array input in the terminal and also in the log
            for (int i = 0; i < n; i++)
            {
                // displaying the array input
                cout << ptr[i];
                LOG_INFO("array element " + std::to_string(i) + " : "+ std::to_string(ptr[i]));
            }
            // deleting the array for redundance
            delete[] ptr;
            
            
        }
        catch(const std::exception& e)
        {
            LOG_ERROR("Error occurred : "+ string(e.what()));
            std::cerr << e.what() << '\n';
        }
        
    }
    
    LOG_INFO("ending the program...");
    return 0;
}