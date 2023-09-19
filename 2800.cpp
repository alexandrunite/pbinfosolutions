#include <iostream>

using namespace std;

int main()
{
    int i,j,n,m,a[51][51];
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            cin>>a[i][j];
    for(i=1;i<=n;i++)
        a[i][1]=a[n][m],a[i][m]=a[n][m];
    for(j=1;j<=m;j++)
        a[1][j]=a[n][m],a[n][j]=a[n][m];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            cout<<a[i][j]<<' ';
        cout<<endl;
    }
    return 0;
}
