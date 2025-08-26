// here we perform different operation like concatenation,compare,strlen,count constant,vowel,check 
// pallindrome number
#include<iostream>
#include<cstring>
#include<stdexcept>
#include"../log/log_program.hpp"
int my_strlen(const char str1[]){
    int len = 0;
    while (str1[len]!='\0')
    {
        len++;
    }
    return len;
}
void concat(char* dest,const  char* src1,const char* src2){
    int i = 0 ;
    // first get the src 1
    while (src1[i]!='\0')
    {
        dest[i] = src1[i];
        i++;
    }
    // check the str2 is empty or not if not add space
    if (i>0 && src2[0]!='\0')
    {
        dest[i] = ' ';
        i++;
    }
    
    // get the second src
    int j = 0;
    while (src2[j]!='\0')
    {
        dest[i] = src2[j];
        i++;
        j++;
    }
    
    dest[i] = '\0';
}

// reverse the string 
void reverse(char src[]){
    int end = my_strlen(src) - 1;
    int start = 0;
    while (start < end)
    {
        char temp = src[start];
        src[start] = src[end];
        src[end] = temp;
        start++;
        end--;
    }
}
int main(int argc,char* argv[]){
    LOG_INFO("Program started...");
    char str1[100],str2[100];
    std::cout << "enter the first string : " << std::endl;
    std::cin.getline(str1,100);
    std::cout << "enter the second string : " << std::endl;
    std::cin.getline(str2,100);
    int len = my_strlen(str1);
    std::cout << "The length of the string is : " << len << std::endl;
    LOG_INFO("The length of the string is : " + std::to_string(len));
    int len1 = my_strlen(str2);
    std::cout << "The length of the string is : " << len1 << std::endl;
    LOG_INFO("The length of the second string is : " + std::to_string(len1));
    char buffer[300];
    concat(buffer,str1,str2);
    std::cout << "After concat operation the final string is : " << buffer << std::endl;
    LOG_INFO(std::string("After concat the final string is  : " )+ buffer);   
    reverse(str1);
    std::cout << "After reversing the string is : " << str1 << std::endl;
    LOG_INFO(std::string("After reversing the string : ") + str1);
    LOG_INFO("Program ended...");
    return 0;
}