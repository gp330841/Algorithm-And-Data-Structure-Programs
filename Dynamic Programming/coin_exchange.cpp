#include<iostream>
using namespace std;
int coin_exchange(int coin[],int n,int value)
{
    int i,j;
    int t[n][value+1];

     for(i=0;i<n;i++)
        t[i][0]=1;
    for(i=0;i<n;i++)
    {
        for(j=1;j<=value;j++)
        {
            if(j<coin[i])
                t[i][j]=t[i-1][j];
            else
                t[i][j]=t[i-1][j]+t[i][j-coin[i]];
                 cout<<t[i][j]<<" ";
        }

        cout<<endl;
    }

    return t[n-1][value];
}
int main()
{
    int n;
    cout<<"Enter the number of coins:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
        int value;
    cout<<"Enter the value to be exchange:";
    cin>>value;
    int res=coin_exchange(a,n,value);
    cout<<res;
}
