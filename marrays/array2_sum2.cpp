// find the array element sum of the given array
#include<iostream>
#include<string>
#include<stdexcept>
#include"../log/log_program.hpp"
int main(int argc,char* argv[]){
    int n;
    std::cout << "enter the number of element in that : " << std::endl;
    std::cin>> n;
    int* arr = new int[n];
    std::cout << "enter the array element : "<<std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cin >>  arr[i];
    }
    // for the sum of the array
    int maxSum = 0;
    for (int i = 0; i < n; i++)
    {
        maxSum += arr[i];
    }
    std::cout << "the array sum is : " << maxSum << std::endl;
    LOG_INFO("the sum is : " + std::to_string(maxSum));
    delete[] arr;
    return 0;
}