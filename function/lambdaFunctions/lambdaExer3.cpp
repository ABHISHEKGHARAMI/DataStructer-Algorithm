// write a c++ program to print all the sum of the given array
#include<iostream>
#include<stdexcept>
#include<climits>
#include"../../log/log_program.hpp"
using namespace std;
int main(int argc,char* argv[]){
    LOG_INFO("Program started...");
    int n;
    cout << "enter the number want to allocate : ";
    if (!(cin >> n))
    {
        // show to log that no input is given by the user
        LOG_ERROR("No user input is given to construct the array !!");
    }
    int arr[n];
    auto arraySum = [=](int arr[],int n){
       int sum = 0;
       for (int i = 0; i < n; i++)
       {
         sum += arr[i];
       }
       return sum;
    };
    try
    {
        cout << "enter the array element";
        for (int i = 0; i < n ; i++)
        {
            // take array element
            if (!(cin >> arr[i]))
            {
                // user does not give the array input
                LOG_ERROR("User does not give the array element properly..");
            }
            
        }
        // now lets take the array sum according to the question
        int result = arraySum(arr,n);
        if(result == INT_MAX)
        {
            throw runtime_error("Array sum can not be infinity for limited array for specific Case!!");
        }else{
            cout << "The sum of the array is : "<< result;
            LOG_INFO("Sum of the array is : " + std::to_string(result));
        }
        
        
        
    }
    catch(const std::exception& e)
    {
        LOG_ERROR("Exception occurred : "+ string(e.what()));
        std::cerr << e.what() << '\n';
    }
    
    LOG_INFO("Program finished");
    return 0;
}