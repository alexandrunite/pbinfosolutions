#include <iostream>

using namespace std;

char cifru[7][7];

int main()
{
    char lit='a';
    for(int i=0;i<6;i++)
        for(int j=0;j<6;j++)
        {
            cifru[i][j]=lit;
            lit++;
        }
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            cout<<cifru[i][j]<<' ';
        }
        cout<<endl;
    }

}
