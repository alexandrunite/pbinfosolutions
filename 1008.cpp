#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
    ifstream f("spirala1.in");
    ofstream g("spirala1.out");
    int n,a[101][101]={0},v[100001],i,j,k;
    f>>n;
    for(i=1;i<=n;i++)
    {
            f>>v[i];
    }
    int lung=sqrt(n-1),is=1;
    int id=1;
    while(lung>0)
    {
        for(j=is;j<is+lung;j++)
            a[j][is]=v[id],id++;
        for(i=is;i<is+lung;i++)
            a[is+lung][i]=v[id],id++;
        for(j=is+lung;j>is;j--)
            a[j][is+lung]=v[id],id++;
        for(i=is+lung;i>is;i--)
            a[is][i]=v[id],id++;
        lung-=2;
        is++;
    }
    if(n%2)
        a[is][is]=v[id];
    for(i=1;i<=sqrt(n);i++)
    {
        for(j=1;j<=sqrt(n);j++)
            g<<a[i][j]<<' ';
        g<<endl;
    }
    return 0;
}
