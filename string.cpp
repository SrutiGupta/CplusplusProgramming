#include<iostream>
using namespace std;
void reverse(char name[],int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        swap(name[start++],name[end--]);
    }

}
int getlength(char name[])
{
    int count=0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[20];
    cout<<"Enter your name"; 
    cin>>name;
    cout<<name;
    int key=getlength(name);
    cout<<key<<endl;
    reverse(name,key);
    cout<<name;
    
    return 0;
}