// here we practise all the things about the string class
#include<iostream>
#include<string>
#include<stdexcept>
#include"../log/log_program.hpp"
int main(int argc,char* agv[]){
    LOG_INFO("Program started...");
    std::string s1;
    // first take the input as string
    std::cout << "enter the first string :" << std::endl;
    std::getline(std::cin,s1);
    // second the copy the specific string
    int size = s1.size();
    std::cout << "the size of the string is : " << size << std::endl;
    LOG_INFO("The size of the string is : " + std::to_string(size));
    int len;
    std::cout << "enter to length of the string to copy to another string : " << std::endl;
    std::cin >> len;
    if (len < size)
    {
        // copy the specific length of the string
        std::string s2(s1,len,size);
        std::cout << "the string after copying is : " << s2 << std::endl;
        LOG_INFO("after coping the string is " + s2);
        std::cout << "the size of the string is : " << s2.size() << std::endl;
        LOG_INFO("The size of the string is : " + std::to_string(s2.size()));
        std::cout << "The capacity of the string is : " << s2.capacity() << std::endl;
        LOG_INFO("the capacity of the string is : " + std::to_string(s2.capacity()));

    }
    // now we should learn about the capacity of the string class
    std::cout << "the capacity of the first string is : " << s1.capacity() << std::endl;
    LOG_INFO("the capacity of the first string is : " + std::to_string(s1.capacity()));
    // check the string is empty or not
    std::cout << "empty: " << (s1.empty() ? "yes" : "no" ) << std::endl;
    

    // now we have to learn the different access to the string is
    // have to access the first element of the string
    std::cout << "the first element of the string is : " << s1.at(0) << std::endl;
    LOG_INFO("The first string is : " + s1.at(0));
    std::cout << "the second element of the string is : " << s1.at(s1.size() - 1) << std::endl;
    LOG_INFO("the last element of the string is : " + s1.at(s1.size() - 1 ));
    LOG_INFO("Program ended..");
    return 0;
}