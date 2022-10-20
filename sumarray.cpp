#include<iostream>
using namespace std;
int main()
{
    int A[2][3];
    int i,j,sum=0;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>A[i][j];
        }
        cout<<endl;
    }
    for(i=0;i<2;i++)
    {
       for(j=0;j<3;j++)
       {
           sum=sum+A[i][j];
       }
    }
    cout<<"Sum is:"<<sum;
    return 0;
}
