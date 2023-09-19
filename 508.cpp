#include <iostream>
using namespace std;

int cautareBinara(int v[],int n,int nr)
{
    int ls=1,ld=n,mij;
    bool ok=false;
    while(ls<ld&&ok==0)
    {
        mij=(ls+ld)/2;
        if(v[mij]==nr)
            ok=true;
        else if(nr<v[mij])
            ld=mij-1;
        else
            ls=mij+1;
    }
    if(ok||v[ls]==nr)
        return 1;
    else
        return 0;
}

int main()
{
    int n,v[25001];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    int m,u[200001],ans[200001];
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>u[i];
        ans[i]=cautareBinara(v,n,u[i]);
    }
    for(int i=1;i<=m;i++)
    {
        cout<<ans[i]<<' ';
    }
    return 0;
}
