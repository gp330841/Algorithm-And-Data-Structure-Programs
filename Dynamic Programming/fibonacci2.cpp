#include<iostream>
#define max 100
using namespace std;
long long  int table[max];
long long int fun(int n)
{
    if(table[n]==0)
    {
        if(n<=1)
            table[n]=n;
        else
            table[n]=fun(n-2)+fun(n-1);
    }
    return table[n];
}
int main()
{
    int n;
    cin>>n;
   cout<<fun(n);
    // for(int i=0;i<max;i++)
        //cout<<table[i];
    return 0;
}
