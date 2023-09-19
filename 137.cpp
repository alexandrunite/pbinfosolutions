#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    char s[256];
    int vectoraparitii[256]={0};
    cin.getline(s,256);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]!=' ')
        {
            if(s[i]>='a'&&s[i]<='z')
            {
                if(vectoraparitii[(int)s[i]]==0)
                {
                    cout<<s[i]<<' ';
                    vectoraparitii[(int)s[i]]++;
                }
            }
        }
    }
    return 0;
}
