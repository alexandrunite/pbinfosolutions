#include <iostream>
using namespace std;

int main()
{
    int m,n,sum=0,maxi=0,ap=0,v[100],p=0,maxi1=0;
    cin>>m>>n;
    int a[m][n];
    for (int i=0;i<m;i++)
        for (int j=0;j<n;j++)
        cin>>a[i][j];
    for (int i=0;i<m;i++)
        {
        maxi=1;
        for (int j=0;j<n;j++)
        {for (int i1=0;i<m;i++)
            {for (int j1=0;j<n;j++)
                {if(a[i][j]==a[i1][j1])
                    maxi++;
                }
            }
        }
        if (maxi>sum)
            sum=maxi;
        }
    cout<<maxi;
    /**for (int i=0;i<m;i++)
        {
        maxi=0;
        for (int j=0;j<n;j++)
        {for (int i1=0;i<m;i++)
            for (int j1=0;j<n;j++)
                if(a[i][j]==a[i1][j1])
                maxi++;
        if (maxi==sum)
            {cout<<a[i][j];
     /**       p++;}
        }
        }
    for(int i=0; i<p;i++)
        if(v[i+1]>v[i])
        maxi1=v[i];
    cout<<maxi1;
    **/
}

