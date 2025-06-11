#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter age"<<endl;
    cin>>a;
    switch (a)
    {
    case 1:
        cout<<"excelent";
        break;
    case 2:
    cout<<"Good";
    break;
    
    default:
    cout<<"invalid";
        break;
    }
}
