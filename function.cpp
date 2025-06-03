#include<iostream>
using namespace std;
bool prime_check(int n)
{
    if(n<2)
    {
        return 1;
    }
    for (int i = 2; i < n; i++)
    {
        if(n%i==0)
        {
         return 0;
        }  
    }
    return 1;
}
int main()
{
    int n;
    cout<<"enter number: ";
    cin>>n;
    if(prime_check(n))
    {
        cout<<"it is a prime number";
    }
    else
    {
        cout<<"it is not a prime number";
    }
    return 0;
}
