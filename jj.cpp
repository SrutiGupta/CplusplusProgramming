#include <iostream>
using namespace std;
/*int power (int a, int b)
{
    int ans =1;
    for(int i=1;i<=b;i++)
    {
        ans=ans*a;
    }
    return ans;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"a^b is "<<power(a,b)<<endl;
}
*/
//ncr
/*int facto (int n)
{
    int fact = 1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int ncr(int n,int r)
{
    int num=facto(n)/(facto(r)*facto(n-r));
    return num;
}
int main()
{
    int n,r;
    cout<<"Enter n and r"<<endl;
    cin>>n>>r;
    cout<<"nCr is "<<ncr(n,r)<<endl;
}
*/
//stack
int update(int a )
{
    a-=5;
    cout<<a<<endl;
    return a ;
    
}
int main()
{
    int a=15;
    update(a);
    cout<<a<<endl;

}