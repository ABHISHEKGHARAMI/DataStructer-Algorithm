// Check whther a string is alphanumeric palindrome or not
#include<iostream>
#include<cstring>
#include<stdexcept>
#include"../log/log_program.hpp"
bool isalphaNUmericPallindrome(const char* src){
    if (src==nullptr)
    {
        LOG_ERROR("This is a null pointer exception!!!");
        throw std::invalid_argument("This is a null pointer exception!!");
    }
    int left = 0;
    int right = std::strlen(src) - 1;
    while (left < right)
    {
        if (!std::isalnum(static_cast<unsigned char>( src[left])))
        {
            left++;
            continue;
        }
        if (!std::isalnum(static_cast<unsigned char> (src[right])))
        {
            right++;
            continue;
        }
        if (std::tolower(static_cast<unsigned char>(src[left])) != std::tolower(static_cast<unsigned char> (src[right])))
        {
            return false;
        }
        left++;
        right--;
        
    }
    return true;
}
int main(int argc,char* argv[]){
    LOG_INFO("Program started...");
    char src[100];
    std::cout << "Enter the string :" << std::endl;
    std::cin.getline(src,100);
    bool res = isalphaNUmericPallindrome(src);
    if(res){
        std::cout << "the string is pallindrome" << std::endl;
    }
    else{
        std::cout<< "the string is not pallindrome" << std::endl;
    }
    LOG_INFO("Program ended...");
    return 0;
}