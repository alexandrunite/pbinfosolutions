#include <iostream>

using namespace std;
int a[101][101];
int main()
{
    int n,sumap=0,sumas=0,cmmdc,i,j,r;
    cin>>n;
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
        cin>>a[i][j];
    for(i=0; i<n; i++)
       {
          j=i+1;
          sumap+=a[i][j];
       }
    for(i=0; i<n; i++)
       {
          j=i-1;
          sumap+=a[i][j];
       }
    cout<<sumap;
    return 0;
}
