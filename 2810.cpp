#include <iostream>
using namespace std;

double a[52][52];

int main()
{
    int n,i,j;
    double s;
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin>>a[i][j];
    for (i=n;i>n/2;i--)
        for(j=n;j>0;j--)
            a[i+1][j]=a[i][j];
    for(int j=1;j<=n;j++)
    {
        s=0;
        for(i=1;i<=n+1;i++)
            if(i!=n/2+1)
            s=s+a[i][j];
        a[n/2+1][j]=s/n;
    }
    for(i=1;i<=n+1;i++)
        {
            for(j=1;j<=n;j++)
                cout<<a[i][j]<<' ';
            cout<<endl;
        }
    return 0;
}
