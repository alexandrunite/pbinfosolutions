#include <iostream>

using namespace std;


int main()
{
    int n,p,v1[50001]={0},v2[50001]={0},m,cont=0;
    cin>>n>>p;
    int valmin=10001;
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
        if(v1[i]<valmin)
            valmin=v1[i];
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>v2[i];
        if(v2[i]<=(p/valmin))
        {for(int j=0;j<n;j++)
        {
            if(v2[i]*v1[j]<p)
                cont++;
        }
        }
    }
    cout<<cont;
    return 0;
}
