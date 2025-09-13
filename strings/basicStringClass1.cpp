// here to learn the basic string class and different methods for this class for working with string
#include<iostream>
#include<string>
#include<stdexcept>
#include"../log/log_program.hpp"
int main(int argc,char* argv[]){
    std::string s1;
    std::cout << "enter a string :" << std::endl;
    std::cin >> s1;
    std::cout << "empty : " << (s1.empty() ? "yes" : "no") << std::endl;
    return 0;
}