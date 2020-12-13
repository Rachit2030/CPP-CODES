#include<iostream>
using namespace std;
int power(int x,int y)
{
    int z=1;
    for(int i=1;i<=y;i++)
    z*=x;
    return z;
}
int main()
{
    int x,y;
    cout<<"enter the numbers"<<endl;
    cin>>x>>y;
    int z=power(x,y);
    cout<<z<<endl;
}
