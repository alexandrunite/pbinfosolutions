#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    int n,v[51];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<sqrt(8);

    for(int i=0;i<n;i++)
    {
        if(sqrt(v[i])==(v[i]*v[i]))
        {
            for(int k=n;k>i;i--)
            {
                v[k]=v[k-1];
            }
            n++;
            v[i]=sqrt(v[i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<' ';
    }
    return 0;
}

