#include <iostream>
using namespace std;

int a[101][101];

int main()
{
    int z,n,i,j,suma1=0,suma2=0,suma3=0,suma4=0;
    cin>>n>>z;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        {
           if(i<j&&i+j<n+1)
                suma1+=a[i][j];
           else if(j<i&&i+j>n+1)
                suma2;
           else if(!(i==j||i+j==n+1))
                a[i][j]=3;
        }
    cout<<suma;
    return 0;
}

