#include <bits/stdc++.h>
using namespace std;
int main()

{
    char p[257];
    cin.getline(p,257);
    int n;
    cin>>n;
    for(int i=0;i<strlen(p)-n;i+=n)
        for(int i=0;i<strlen(p)+1;i+=n)
        cout<<p[i];
}
