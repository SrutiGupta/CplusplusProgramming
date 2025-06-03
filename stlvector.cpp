#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> v;
    cout<<"capasity->"<<v.capacity()<<endl;
    v.push_back(5);
    cout<<"capasity->"<<v.capacity()<<endl;
    v.push_back(10);
    cout<<"size->"<<v.size()<<endl;
    cout<<"capasity->"<<v.capacity()<<endl;
    v.pop_back();
    cout<<"size->"<<v.size()<<endl;
    cout<<"capasity->"<<v.capacity()<<endl;
    cout<<v.back();
    cout<<"size->"<<v.size()<<endl;
    cout<<"capasity->"<<v.capacity()<<endl;
}