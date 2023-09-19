#include <iostream>
using namespace std;

int main()
{
    int n,m,i,j,C=0;
    long a[103][103];
    cin>>m>>n;
    for(int i=0;i<=m+1;i++)
        for(int j=0;j<=n+1;j++)
        {
            if(i==0 || j==0 || i==n+1 || j == m+1)
            a[i][j]=2;
            else cin>>a[i][j];
        }
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            {
                int ok=0;
            if(a[i][j+1]%2==0&&a[i+1][j]%2==0&&a[i-1][j]%2==0&&a[i][j-1]%2==0)
                ok=1;
                if(ok)
                C++;
            }
    cout<<C;
    return 0;
}
