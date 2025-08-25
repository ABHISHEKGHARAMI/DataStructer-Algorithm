// here we declare the string of array for understanding the problem
#include<iostream>
#include<cstring>
#include<stdexcept>
#include"../log/log_program.hpp"
int main(int argc,char* argv[]){
    LOG_INFO("program started...");
    char str1[100],str2[100];
    std::cout << "enter the first string : " <<  std::endl;
    std::cin.getline(str1,100);
    std::cout << "enter the second string : " << std::endl;
    std::cin.getline(str2,100);
    std::cout << "the first string is : " << str1 << std::endl;
    LOG_INFO(std::string("The first string is : ") + str1);
    std::cout << "the second string is : " << str2 << std::endl;
    LOG_INFO(std::string("The second string is : ") + str2);
    std::cout << "The length of the first string is : " << std::strlen(str1) << std::endl;
    LOG_INFO("the length of the first string is : " + std::to_string(std::strlen(str1)));
    std::cout<< "each char of the string is : " << std::endl;
    for (char ch:str1)
    {
    //   prints every char in the console
         std::cout << ch << std::endl;
         LOG_INFO(std::string(1,ch));
    }
    
    std::cout << "The length of the second string is : " << std::strlen(str2)<< std::endl;
    LOG_INFO("The length of the second string is : " + std::to_string(std::strlen(str2)));
    LOG_INFO("program ended..");
    return 0;
}