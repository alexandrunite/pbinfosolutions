#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    ifstream f("rotire.in");
    ofstream g("rotire.out");
    int a[105][105],n,m,b[105][105];
    f>>m>>n;
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            f>>a[i][j];
    for(int j=1;j<=n;j++)
        for(int i=1;i<=m;i++)
            b[n-j+1][i]=a[i][j];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            g<<b[i][j]<<" ";
        g<<endl;
    }
    return 0;
}
