#include<iostream>
#include<list>
#include<iterator>
using namespace std;
    int main()
    {
        list<int> l1;
        l1.push_back(11);
        l1.push_back(55);
        for(int i:l1)
        {
            cout<<i<<endl;
        }
    }   