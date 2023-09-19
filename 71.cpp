#include <iostream>
using namespace std;

int main()
{
    int n,m;
    int A[1001],B[1001];
    int t,k=1;
    cin>>t;
    for(int i1=0;i1<t;i1++)
    {
        int ok=1;
        int x;
        cin>>x;
        for(int i=1;i<=x;i++)
        {
            cin>>A[i];
        }
        int y;
        cin>>y;
        int v;
        int i2=1;
        for(int i=1;i<=y;i++)
        {
            cin>>v;
            int s=A[i2];
            while(s<v&&i2<x)
            {
                s+=A[i2];
                i2++;
            }
            if(s!=v)
            {
                ok=0
                if(i2>=x&&i<y)
                    ok=0;
            }
        }
        B[t]=ok;
    }
    for(int i=0;i<t;i++)
    {
        cout<<B[i]<<endl;
    }
    return 0;
}
