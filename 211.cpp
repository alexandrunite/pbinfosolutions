#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("spirala.in");
    ofstream g("spirala.out");
    int n,a[101][101]={0},i,j,k;
    f>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            f>>a[i][j];
    }
    int lung=n-1,is=1;
    while(lung>0)
    {
        for(j=is;j<is+lung;j++)
            g<<a[is][j]<<' ';
        for(i=is;i<is+lung;i++)
            g<<a[i][is+lung]<<' ';
        for(j=is+lung;j>is;j--)
            g<<a[is+lung][j]<<' ';
        for(i=is+lung;i>is;i--)
            g<<a[i][is]<<' ';
        lung-=2;
        is++;
    }
    if(n%2)
        g<<a[is][is];
    return 0;
}
