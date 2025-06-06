// in the previous program we talked about the different jump statement for the program
// but here we only talk about the one special jump statement and that is goto
// so there the main difference between the break or continue is that the goto will divert the program to
// a different section
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int age;
    cout << "Enter the age of user :";
    cin >> age ;
    if (age<18)
    {
        goto Note;
    }else{
        cout << "user is allowed to vote for democracy.\n";
        return 0;
    }
    Note:
        cout << "User is not allowed to vote";

    
    return 0;
}