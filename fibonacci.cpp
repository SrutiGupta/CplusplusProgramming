#include<iostream>
using namespace std;
int main()
{
    int a=0;
    int b=1;
    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;
    cout<<a<<endl<<b<<endl;
    for(int i=1;i<n;i++)
    {
     int num=a+b;
     a=b;
     b=num; 
     cout<<num<<endl;
    }
}