#include <iostream>

using namespace std;

bool sumaDivizorilor(int n)
{
    int s=0;
    for(int i=1;i*i<n;i++)
    {
        s+=i;
        s+=n/i;
    }
    s-=n;
    if(s==n)
        return 1;
    else
        return 0;
}


int main()
{
    int n,cont=0;
    cin>>n;
    int v[1001];
    for (int i=0;i<n;i++)
    {
        cin>>v[i];
        if(sumaDivizorilor(v[i]))
            cont++;
    }
    cout<<cont;

}
