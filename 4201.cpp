
#include <iostream>
#define ll long long
using namespace std;

void swap1(ll &n,ll &m)
{
    ll aux;
    aux=n;
    n=m;
    m=aux;
}
/**
int tmp[99999];

void MergeSort(int v[], int st, int dr)
{
	if(st < dr)
	{
		int m = (st + dr) / 2;
		MergeSort(v, st , m);
		MergeSort(v, m + 1 , dr);
		//Interclasare
		int i = st, j = m + 1, k = 0;
		while( i <= m && j <= dr )
			if( v[i] < v[j])
				tmp[++k] = v[i++];
			else
				tmp[++k] = v[j++];
		while(i <= m)
			tmp[++k] = v[i++];
		while(j <= dr)
			tmp[++k] = v[j++];
		for(i = st , j = 1 ; i <= dr ; i ++ , j ++)
			v[i] = tmp[j];
	}
}

int main()
{
        int t,ans[1001],n;
        cin>>t;
        for(int i1=0;i1<t;i1++)
        {
            int n,k,v[1001],elmax=INT_MAX;
            cin>>n>>k;
            for(int i=0;i<n;i++)
            {
                cin>>v[i];
            }
            for(int i=0;i<n;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                    if(v[i]%k==v[j]%k)
                        {
                            swap1(v[i],v[j]);
                            k--;
                        }
                }
            }
            MergeSort(v,0,n);
            int smax=0;
            for(int i=n-1;i>n-k;i--)
            {
                smax+=v[i];
            }
            ans[i1]=smax;
        }
        for(int i=0;i<n;i++)
        {
            cout<<ans[i]<<endl;
        }

        return 0;
}
**/

int main()
{
        ll t,ans[1001],n;
        cin>>t;
        for(int i1=0;i1<t;i1++){
            ll n,k,k1,v[1001];
            cin>>n>>k;
            k1=k;
            ll smax=0;
            for(int i=1;i<=n;i++)
                {
                    cin>>v[i];
                }
            for(int i=1;i<=n;i++)
            {
                for(int j=i+1;j<=n;j++)
                {
                    if((i%k==j%k)&&k1)
                        {
                            swap1(v[i],v[j]);
                            k1--;
                            for(int i3=1;i3<=n-k;i3++)
                            {
                                ll s=0;
                                ll k2=0;
                                for(int i2=i3;k2<k;k2++,i2++)
                                {
                                    s+=v[i2];
                                }
                                if(s>smax)
                                    smax=s;
                            }
                        }
                }
            }
        if(n!=k)
        {
            for(int i=1;i<=n-k+1;i++)
            {
                ll s=0;
                ll k2=0;
                for(int i2=i;k2<k;k2++,i2++)
                {
                    s+=v[i2];
                }
                if(s>smax)
                    smax=s;
            }
            ans[i1]=smax;
        }
        else{
            ll s=0;
            for(int i=1;i<=n;i++)
                s+=v[i];
            ans[i1]=s;
        }
        }
        for(int i=0;i<t;i++)
        {
            cout<<ans[i]<<endl;
        }
        return 0;
}
