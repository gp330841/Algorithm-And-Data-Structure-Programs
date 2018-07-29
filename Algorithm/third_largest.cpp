#include<iostream>
using namespace std;
int thirdLargest(int *a,int n)
{
    int first=a[0],second=INT_MIN,third=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]>first)
        {
             third=second;
              second=first;
            first=a[i];
        }
        else if(a[i]>second)
        {
            third=second;
            second=a[i];
        }
        else if(a[i]>third)
            third=a[i];
    }
    return third;
}
int main()
{
    int a[]={1,2,5,3,4,9,6,8,7};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<thirdLargest(a,n);
    return 0;
}
