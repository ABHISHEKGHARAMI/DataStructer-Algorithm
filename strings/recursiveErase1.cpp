// an input string and a substring is given then erase the substring 
#include<iostream>
#include<cstring>
#include<stdexcept>
#include"../log/log_program.hpp"
void removeSubString(char str1[],const char* sub_str){
    int m , n ;
    n = std::strlen(str1);
    m = std::strlen(sub_str);
    bool found  = true ; 
    while (found)
    {
        found = false;
        for (int i = 0; i <= n - m ; i++)
        {
            int j = 0;
            for (j = 0; j < m ; j++)
            {
                if (str1[i + j] != sub_str[j])
                {
                    break;
                }
                
            }
            // if match found then have to shift the char of the main str
            if (j == m)
            {
                for (int k = i; k <= n - m ; k++ )
                {
                    str1[k] = str1[k + m];
                }
                n = n - m ;
                found = true;
                break;
            }
            
            
        }
        
    }
    
    
}
int main(int argc,char* argv[]){
    LOG_INFO("Program started...");
    char str1[100] = "daabcbcba";
    char sub_str[] = "abc";
    removeSubString(str1,sub_str);
    std::cout << "the string is : " << str1 << std::endl;
    LOG_INFO("Program ended..")
    return 0;
}