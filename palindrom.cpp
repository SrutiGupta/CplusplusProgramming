#include <iostream>
#include <string>
using namespace std;
char tolower(char ch)
{
    if(ch >='a' && ch<= 'z')
    {
        return ch;
    }
    else{
        char lower=ch-'A'+'a';
        return lower;
    }
}
bool palindrome(string str)
{
    int start=0;
    int end =str.size()-1;
    while(start<=end)
    {
        if(tolower(str[start])!=tolower(str[end]))
        {
            return 0;
        }
        else{
            start++;
            end--;
        }
    }
    return 1;
}
int main()
{
    string str;
    cout<<"Enter the string:-";
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        str[i]=tolower(str[i]);
    }
    cout<<palindrome(str);
}