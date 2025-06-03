#include <iostream>
using namespace std;
char getmax(string str)
{
    int arr[26] = {0};
    for(int i=0;i<str.length();i++)
    {
        char ch = str[i];
        int n=0;
        if(ch >='a' && ch<='z')
        {
             n=ch-'a';
            arr[n]++;
        }
        else{
            n =ch - 'A';
            arr[n]++;

        }
        arr[n]++;
    }
    int maxi=-1;
    int ans = 0;
    for(int i=0;i<26;i++)
    {
        if(maxi<arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    return 'a'+ans;
}
int main()
{
    string str = "SRUUUUUUTI";
    int count = 0;
    cout<<getmax(str)<<endl;
    
}