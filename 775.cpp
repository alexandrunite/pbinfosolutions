#include <iostream>
using namespace std;

double a[101][101];
int g;

int main()
{
    int n,m,i,j;
    cin>>m>>n;
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    for(int j=n;j>=1;j--)
    {
        int cont=0;
        for(int i=1;i<=m;i++)
        {
            if(a[i][j]==0)
                cont++;
        }
        if(cont==0)
        {
            for(int k=j;k<n;k++)
                for(int i=1;i<=m;i++)
                    a[i][k]=a[i][k+1];
        }
    }
        for(int i=1;i<=m;i++)
            for(int j=1;j<=n;j++)
            {
            cout<<a[i][j]<<' ';
            cout<<endl;
            }

    return 0;
}
