#include <iostream>
using namespace std;

int v[8]={100,200,243,132,413,352,222,341};

int f(int poz,int v[],int c)
{  if(poz<0) return c;
   else {
       int nr=v[poz];
       while(nr) {
           if(nr%10>c) c=nr%10;
           nr=nr/10; }
       return f(poz-1,v,c);
     }
}



int main()
{
    cout<<f(7,v,0);
}
