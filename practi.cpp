#include <iostream>
#include<algorithm>
#include<array>

using namespace std;
int main()
{
    array<int,5> arr={7,1,5,3,6,4};
    int buy=arr.min();
    int sell=arr.max();
    int maxprofit=sell-buy;
    cout<<maxprofit;
}