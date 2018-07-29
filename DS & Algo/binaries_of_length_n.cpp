#include<iostream>
using namespace std;
void bin(char a[],int n)
{
    if(n<1)
        cout<<a<<endl;
    else
    {
        a[n-1]='0';
        bin(a,n-1);
        a[n-1]='1';
        bin(a,n-1);
    }
}
int main()
{
    int n;
    cin>>n;
    char a[n]={'\0'};
    bin(a,n);
}
