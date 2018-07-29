#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a==b)
        return a;
    else if(a%b==0)
        return b;
    else if(b%a==0)
        return a;
    else if(a>b)
        return gcd(a%b,b);
    else if(b>a)
        return gcd(b%a,a);
}
int main()
{
    int a,b;
    cout<<"Enter two number: ";
    cin>>a>>b;
    cout<<"Gcd of "<<a<<" and "<<b<<" is= "<<gcd(a,b);
}
