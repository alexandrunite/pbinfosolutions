#include <iostream>

using namespace std;
int a[25][25];
int main()
{
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        {
           if(i<j&&i+j<n+1)
                a[i][j]=1;
           else if(j<i&&i+j>n+1)
                a[i][j]=2;
           else if(!(i==j||i+j==n+1))
                a[i][j]=3;
        }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cout<<a[i][j]<<' ';
        cout<<'\n';
    }
    return 0;
}
