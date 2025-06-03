#include<iostream>
using namespace std;
int main()
{
    int a=50;
    int *ptr ;
    ptr = & a;
  // exact value
    cout<<*ptr<<endl;
    // adress of pointer
    cout<<& ptr<<endl;
    //adress of value
    cout<<& a<<endl;
    cout<< ptr;
    return 0;
}