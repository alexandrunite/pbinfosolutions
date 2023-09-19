#include <iostream>
using namespace std;

int main()
{
 int n,v[1001],s=0;
 cin>>n;
 for(int i=1;i<=n;i++)
 {
     cin>>v[i];
 }
 int i=1;
 bool gasit=false;
 bool gasit1=false;
 while(!gasit)
 {
     if(v[i]%2==0)
        gasit=true,gasit1=true;
     else
        i++;
 }
 int i1=n;
 gasit=false;
 bool gasit2=false;
 while(!gasit)
 {
     if(v[i1]%2==0)
        gasit=true,gasit2=true;
     else
        i1--;
 }
 for(int j=i;j<=i1;j++)
 {
     s+=v[j];
 }
 if(gasit1&&gasit2)
    cout<<s;
 else
    cout<<"NU EXISTA";
 return 0;
}

