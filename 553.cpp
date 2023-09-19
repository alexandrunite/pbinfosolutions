#include <iostream>
using namespace std;

int main()
{
 int n,v[1001],imax=1,imin=1,mx=-999999,mn=999999;
 cin>>n;
 for(int i=1;i<=n;i++)
 {
     cin>>v[i];
     if(v[i]>mx)
        mx=v[i],imax=i;
     else if(v[i]<mn)
        mn=v[i],imin=i;
 }
    cout<<imin<<' '<<imax;
}
