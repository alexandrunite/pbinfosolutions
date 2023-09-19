#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    char s[1001],t[256],aux[1001];
    cin.getline(s,1001);
    cin.getline(t,1001);
    cout<<s<<' '<<t<<endl;
    char *p=strstr(s,t);
    while(p)
    {
        strcpy(aux, p+strlen(t));
        strcpy(p,aux);
        p=strstr(s,t);
    }
    cout<<s<<endl;
    return 0;
}
