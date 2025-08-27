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
// compare two string using the custom function
bool my_compare(const char str1[],const char str2[]){
    int len1 = my_strlen(str1);
    int len2 = my_strlen(str2);
    if (len1 != len2)
    {
        return false;
    }
    for (int i = 0; i < len1; i++)
    {
        if (str1[i]!=str2[i])
        {
            return false;
        }
        
    }
    return true;
}
// check if a given string is pallindrome or not
bool is_pallindrome(const char* str1){
    int start = 0;
    int end = my_strlen(str1) - 1;
    while (start < end)
    {
        if (str1[start] != str1[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
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
// function to count the number of vowels and constant in the string
void count_Vowel_Constant(const char* str1){
    int vowel = 0;
    int constant = 0 ;
    for (int i = 0; i < my_strlen(str1) ; i++)
    {
        char ch = std::tolower(str1[i]);
        if (ch >= 'a' && ch <= 'z')
        {
            if (ch=='a' || ch== 'e' || ch=='i'|| ch=='o' || ch=='u')
            {
                vowel++;
            }else{
                constant++;
            }
            
        }
        
        
    }
    std::cout << "The number of vowel in the string is : " << vowel << std::endl;
    std::cout << "The number of constant in the string is : " << constant << std::endl;
    LOG_INFO("The number of vowel in the string is : " + std::to_string(vowel));
    LOG_INFO("The number of constant in the string is : " + std::to_string(constant));
    
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
    reverse(str1);
    bool is_compare = my_compare(str1,str2);
    if (is_compare==true)
    {
        std::cout << "After compareing the strings are same." << std::endl;
        LOG_INFO("After compareing the two strings are the same.")
    }else{
        std::cout << "Strings are not the same .." << std::endl;
        LOG_INFO("Strings are not same..");
    }
    bool is_pal = is_pallindrome(str1);
    if (is_pal)
    {
        std::cout << "String is pallindrome ." << std::endl;
        LOG_INFO("String is pallindrome.");
    }else{
        std::cout << "String is not pallindrome.." << std::endl;
        LOG_INFO("String is not pallindrome..");
    }
    count_Vowel_Constant(str1);
    count_Vowel_Constant(str2);
    LOG_INFO("Program ended...");
    return 0;
}