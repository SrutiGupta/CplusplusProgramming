#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector <int> n;
    n.push_back(10);
    n.push_back(20);
    n.push_back(30);
    n.push_back(40);
    int a= binary_search(n.begin(),n.end(),30);
    cout<<"yes or no "<<a<<endl;
    cout<<"lower bound"<<lower_bound(n.begin(),n.end(),30)-n.begin()<<endl;
    cout<<"upper bound"<<upper_bound(n.begin(),n.end(),40)-n.begin()<<endl;
    int c=5;
    int b=10;
    cout<<max(c,b);
    swap(c,b);
    cout<<c<<endl;
    string abcd="abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<abcd<<endl;
    rotate(n.begin(),n.begin()+1,n.end());
    for(int i:n)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    sort(n.begin(),n.end());
    for(int i:n)
    {
        cout<<i<<" ";
    }
    return 0;
}

