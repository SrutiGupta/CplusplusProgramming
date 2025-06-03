#include <iostream>
using namespace std;
int unique(int arr[],int size)
{
    int ans =0;
    for(int i=0;i<size;i++)
    {
       ans= arr[i]^ans;
    }
    return ans;
}
int main()
{
    int arr[9]={1,1,2,2,3,3,4,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    unique(arr,size);
    cout<<unique(arr,size);
    return 0;
}