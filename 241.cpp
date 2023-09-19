#include <iostream>
#include <fstream>
using namespace std;

ifstream f("interclasare.in");
ofstream g("interclasare.out");

int main()
{
    int a[100001],b[100001],n,m,c[200002];
    f>>n;
    for(int i=1;i<=n;i++)
    {
        f>>a[i];
    }
    f>>m;
    for(int i=1;i<=m;i++)
    {
        f>>b[i];
    }
    int i=1,j=1,k=1;
    while(i<=n&&j<=m)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            k++,i++;
        }
        else
        {
            c[k]=b[j];
            k++,j++;
        }
    }
    while(i<=n)
    {
        c[k]=a[i];
        i++,k++;
    }
    while(j<=m)
    {
        c[k]=b[j];
        k++,j++;
    }
    for(int i1=1;i1<k;i1++)
    {
        g<<c[i1]<<' ';
        if(i1%10==0)
            g<<endl;
    }
    f.close();
    g.close();
    return 0;
}
