// here to learn the basic string class and different methods for this class for working with string
#include<iostream>
#include<string>
#include<stdexcept>
#include"../log/log_program.hpp"
int main(int argc,char* argv[]){
    std::string s1;
    std::cout << "enter a string :" << std::endl;
//    user input for the line
    std::getline(std::cin,s1);
    std::cout << "empty : " << (s1.empty() ? "yes" : "no") << std::endl;
    // ok now we have now understand to point of the empty method
    // now we are going to use th at or the [] operator
    int pos;
    std::cout << "enter a number want to print the postion of the string : ";
    std::cin >> pos;
    if (pos < 0 || pos > (int)s1.size())
    {
        // invalid postion of the string
        std::cout << "the position user entered is invalid..." << std::endl;
        LOG_ERROR("user entered the invalid input...");
    }
    else{
        std::cout << "the char at the pos is : " << s1.at(pos) << std::endl;
        LOG_INFO("The char at the postion is : " + std::string(1,s1[pos]));
    }
    // after doing all the operation now have to clear the string with clear method
    s1.clear();
    // after clearing the string have to check with the string method
    std::cout << "string is empty : " << (s1.empty() ? "yes" : "no") << std::endl;
    return 0;
}