#include<iostream>
#include<stdlib.h>
using namespace std;
int lis1(int a[],int n)
{
    int *lis,i,j,max=0;
    lis=(int *)malloc(sizeof(int )*n);
    for(int i=0;i<n;i++)
    {
        lis[i]=1;
    }
    for(int i=1;i<n;i++)
        for(int j=0;j<i;j++)
    {
        if(a[i]>a[j] && lis[j]+1>lis[i])
            lis[i]=lis[j]+1;
    }
    for(int i=0;i<n;i++)
        if(max<lis[i])
        max=lis[i];
        free(lis);
    return max;
}
int main()
{
    int n;
    int a[]={10,22,9,33,21,50,41,60};
    n=sizeof(a)/sizeof(a[0]);
    cout<<lis1(a,n);
    return 0;
}
