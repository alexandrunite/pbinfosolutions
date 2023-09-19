#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n,a[25][25]={0},i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        a[i][i]=a[i][n-i+1]=0;
    }
    for(i=1;i<=n/2;i++)
    {
        for(j=i+1;j<=n-i;j++)
            a[i][j]=1;
    }
    for(i=n/2+1;i<=n;i++)
    {
        for(j=n+2-i;j<i;j++)
            a[i][j]=2;
    }
    for(j=1;j<=n/2;j++)
    {
        for(i=j+1;i<n+1-j;i++)
            a[i][j]=a[i][n+1-j]=3;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cout<<a[i][j]<<' ';
        cout<<endl;
    }
    return 0;
}
