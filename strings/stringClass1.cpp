// use the first string class for the practice
#include<iostream>
#include<string>
#include<stdexcept>
#include"../log/log_program.hpp"
int main(int argc,char* argv[]){
    LOG_INFO("program started...");
    std::cout << "enter the string :" << std::endl;
    std::string s1;
    std::getline(std::cin,s1);
    std::cout << "the string is : " << s1 << std::endl;
    LOG_INFO("The string is : " + s1);
    std::cout << "The size of the string is : " << s1.size() << std::endl;
    LOG_INFO("The size of the string is : " + std::to_string(s1.size()));
    char exp;
    std::string s2;
    std::cout << "enter the string to append : " << std::endl;
    std::getline(std::cin,s2);
    s1.append(s2);
    std::cout << "enter the expression for the string : " << std::endl;
    std::cin >> exp;
    std::cout << "now have to push back to the string : " << std::endl;
    s1.push_back(exp);
    std::cout << "the string after the push back of expression : " << s1 << std::endl;
    LOG_INFO("program ended...");
    return 0;
}