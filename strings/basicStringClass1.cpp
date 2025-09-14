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
    // now have to learn the push and pop operation for the string 1 char
    char ch1;
    std::cout << "enter the char for push for the string : " << std::endl;
    std::cin >> ch1;
    // pushing the char at the string
    s1.push_back(ch1);
    std::cout << "After push back the string is : " << s1 << std::endl;
    LOG_INFO("After pushing the char the string is : " + s1);
    // now to pop back the char
    s1.pop_back();
    std::cout << "After pop back the string is : " << s1 << std::endl;
    LOG_INFO("the string after pop back operation is : " + s1) ;
    // now have to learn the find the substring in the string
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::string s2;
    std::cout << "enter the sub-string for the search : " << std::endl;
    std::getline(std::cin,s2);
    size_t pos1 = s1.find(s2);
    if (pos1 < 0 || pos1 >= s1.size())
    {
        std::cout << "the substring is not found..." << std::endl;
        LOG_INFO("The substring could not found...");
    }else{
        std::cout << "the substring found at the postion of : " << pos1 << std::endl;
        LOG_INFO("The substring found at the position at : " + std::to_string(pos1));
    }
    
    // after doing all the operation now have to clear the string with clear method
    s1.clear();
    // after clearing the string have to check with the string method
    std::cout << "string is empty : " << (s1.empty() ? "yes" : "no") << std::endl;
    return 0;
}