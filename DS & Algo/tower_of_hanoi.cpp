#include<iostream>
using namespace std;
int toh(int n,char beg,char aux,char end)
{
    int static move=0;
    if(n>=1)
    {
        toh(n-1,beg,end,aux);
        cout<<beg<<" to "<<end<<endl;
        toh(n-1,aux,beg,end);
        move++;
    }
    return move;
}
int main()
{
    int n,x;
    cout<<"Enter the number of disk: ";
    cin>>n;
    char a,b,c;
    cout<<"Enter three rods(the rod having disk,the rod on which disk have to move and auxilary rod): ";
    cin>>a>>b>>c;
    x=toh(n,a,b,c);
    cout<<"Total move of disks= "<<x;
    return 0;
}
