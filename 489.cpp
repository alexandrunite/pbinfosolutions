#include <iostream>
using namespace std;
int main()
{
    int n,v[1001],i,j;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    j=n;
    i=1;
    while(i<=j)
    {
        cout<<a[i]<<" ";
        if(i!=j)
            cout<<a[j]<<" ";
        i++;
        j--;
    }
    return 0;
}
