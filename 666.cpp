#include <iostream>

using namespace std;


int primeCheck(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 0;
    else
    {
        int i=2;
        while(i*i<=n)
        {
            if(n%i==0)
                return 0;
            i++;
        }
    }
    return 1;
}
int main()
{
    int n,m,a[101][101];
    cin>>n>>m;
    int i,j;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            cin>>a[i][j];
    int cont=0;
    for(i=2;i<=n;i+=2)
    {
        for(j=1;j<=m;j++)
            if(primeCheck(a[i][j]))
                cont++;
    }
    cout<<cont;
    return 0;
}
