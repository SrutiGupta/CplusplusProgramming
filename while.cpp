#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cin>>n;
    int i=1;
    while(i<=n){
        sum=i+sum;
        i=i+1;        
    }
    cout<<sum<<" ";
}