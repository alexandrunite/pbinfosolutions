#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch[260];
    cin.getline(ch , 260);
    int i = 0;
    while(ch[i]!='\0')
    {
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='u' || ch[i]=='o')
            if(ch[i+1]='p')
                if(ch[i]==ch[i+2])
                {cout<<ch[i];
                i+=3;
                }
        cout << ch[i];
                i++;
    }
}
