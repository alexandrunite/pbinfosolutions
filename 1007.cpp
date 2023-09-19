#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream f("matrice7.in");
    ofstream g("matrice7.out");
    int i,j,a[101][101],n,m,vmx=0,ver[101]={0};
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
         {
             cin>>a[i][j];
             if(a[i][j]>vmx)
                vmx=a[i][j],ver[101]={0};
            else if (a[i][j]==vmx)
                ver[i]=1;
         }
    for(i=1;i<=n;i++)
    {
        if(ver[i])
        {
            int imin,jmin,vmin=999999999,imx,jmx;
            for(j=1;j<=m;j++)
            {
                if(a[i][j]<vmin)
                {
                    imin=i;
                    jmin=j;
                    vmin=a[i][j];
                }
                else if(a[i][j]==vmx)
                {
                    imx=i;
                    jmx=j;
                }
            }
            a[imx][jmx]=a[imin][jmin];
        }
    }
    for(i=1;i<=n;i++)
        {for(j=1;j<=m;j++)
            cout<<a[i][j]<<' ';
         cout<<endl;
        }
    return 0;
}
