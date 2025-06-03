#include<iostream>
using namespace std;
int main()
{
    int a[100][100]={{1,2,3},
                {2,3,4}
    };
                
    for(int i=0;i<2;i++)
    {
      for(int j=0;j<3;j++) 
      {
        cout<<"the value at "<<i+1<<","<<j+1<<":-"<<a[i][j]<<endl;
      }
      cout<<endl;
    }
    
    return 0;
}