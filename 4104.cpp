#include <iostream>

using namespace std;


int main()
{
    int n,nr,min1=9999999,a[100001];
    cin>>n;
    int m=n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>nr;
        if(nr<min1)
            min1=nr;
    }
    bool ok=false;
    for(int i=0;i<m;i++)
    {
        if(a[i]<min1)
        {
            cout<<a[i]<<' ';
            ok=true;
        }
    }
    if(!ok)
        cout<<"NU EXISTA";
    return 0;
}
