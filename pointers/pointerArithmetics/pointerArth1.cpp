// here we learn about the pointer arithmetic for sure , and learn that how to use that
// so here we directly can user the pointer to access the memory
// lets see a quick example for sure
#include<iostream>
#include<sstream>
#include<string>
#include<stdexcept>
#include"../../log/log_program.hpp"
using namespace std;
int main(int argc,char* argv[]){
    // here goes the command to execute
    LOG_INFO("Starting the program....");
    int arr[5] = {10,20,30,40,50};
    // first we create a array for the integer now have to allocate the pointer for that to access that
    int *ptr = arr;
    // it will store the first element address or specifically the address of the arr[0] address lets have the look 
    // what it store specifically
    std::stringstream ss;
    ss << ptr;
    cout << "the pointer stores the address of the first element of the array : " << ptr;
    LOG_INFO("the pointer stores the memory of : " + ss.str());
    // now we could access the different memory location with this pointer
    // lets say we want to access the next element or arr[1] so if i do the ptr + 1 it will do the specific job
    // but behind the scene it it is going to the 4 byte because it integer array to execute the command
    cout << "next memory location is : " << ptr + 1;
    ss.str("");
    ss.clear();
    // cleared the stream outputing in the log
    ss << ptr + 1;
    cout << "the next element is  : " << *(ptr + 1);
    LOG_INFO("The next memory location is : " + ss.str());
    LOG_INFO("The next element of the array is : " + std::to_string(*(ptr+1)));
    LOG_INFO("Ending the program.....");
    return 0;
}