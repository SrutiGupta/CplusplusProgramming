#include <iostream>
using namespace std;
int reversearray(int arr[],int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    reversearray(arr,n);
    cout<<"print reverse array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}