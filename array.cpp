#include<iostream>
using namespace std;
int main()
{
    int a[100]={1,2,3};
    for(int i=0;i<3;i++)
    {
       cout<<a[i]<<endl;
    }
    cout<<"the 3rd endex:-";
    cout<<a[2];
    return 0;
}