#include<iostream>
using namespace std;
int min(int a,int b,int c)
{
    if(a<b && a<c)
        return a;
   else  if(b<a && b<c)
        return b;
    else if(c<a && c<b)
        return c;
}
int edit_distance(char *x,char *y,int m,int n)
{
    int dp[m+1][n+1];
    int i,j;
    for(int i=0;i<=m;i++)
        for(int j=0;j<=n;j++)
    {
        if(i==0)
            dp[i][j]=j;
        else if(j==0)
            dp[i][j]=i;
        else if(x[i-1]==y[j-1])
            dp[i][j]=dp[i-1][j-1];
        else
            dp[i][j]=1+min(dp[i][j-1],dp[i-1][j],dp[i-1][j-1]);
    }
    return dp[m][n];
}
int main()
{
    char a[]="cart";
    char b[]="march";
     int m=sizeof(a)/sizeof(a[0]);
    int n=sizeof(b)/sizeof(b[0]);
    cout<<edit_distance(a,b,m,n);
}
