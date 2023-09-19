#include <iostream>

using namespace std;

int main()
{
    int n,pi,pf,x,v[1001],s=0;
    bool ok1=false, ok2=false;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        if(v[i]%2==1&&ok1==0)
            ok1=1,pi=i;
        else if(v[i]%2==1)
            pf=i;
    }
    for(int i=pi;i<=pf;i++)
        s+=v[i];
    cout<<s;
    return 0;
}
