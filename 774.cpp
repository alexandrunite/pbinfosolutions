#include <iostream>
using namespace std;

int a[101][101];

int main()
{
    int m,n,i,j,prim=0,d,k;
    cin>>m>>n;
    for(i=1; i<=m;i++)
        for(j=1;j<=n;j++)
        cin>>a[i][j];
    for(i=1;i<=m;i++)
    {
        if(a[i][1]<2)
            prim=0;
        else prim=1;
        for(d=2;d*d<=a[i][1]&&prim==1;d++)
            {
                if(a[i][1]%d==0)
                    prim=0;
            }
        if(prim==1)
        {
            for(k=i+1;k<=m;k++)
                for(j=1;j<=n;j++)
                    a[k-1][j]=a[k][j];
            m--;
            i--;   //pentru a ramane indicele liniei la aceeasi valoare
        }
    }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
            cout<<a[i][j]<<' ';
        cout<<endl;
    }

}
