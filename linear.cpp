#include<iostream>
using namespace std;
bool search(int arr[],int size,int key)
{
  for(int i=0;i<=size;i++)
  {
    if(arr[i]==key)
    {
        return true;
    }
  }
  return false;
}
int main ()
{
    int arr[5]={1,2,3,4,5};
    int key;
    cout<<"Enter the key"<<endl;
    cin>>key;
    bool found=search(arr,5,key);
    if(found)
    {
        cout<<"key is present"<<endl;
    }
    else
    {
        cout<<"key is not present"<<endl;
    }

}