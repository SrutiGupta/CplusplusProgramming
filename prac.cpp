#include<iostream>
#include<climits>
using namespace std;
int getmax(int num[],int size)
{
    int maxi=INT_MIN;
    for(int i=0;i<size;i++)
    {
        maxi=max(maxi,num[i]);
    }
    return maxi;
}
int main()
{
    int size;
    cin>>size;
    int num[100];
    for(int i=0;i<size;i++)
    {
        cin>>num[i];
    }
    cout<<"maximum value is "<<getmax(num,size)<<endl;
}