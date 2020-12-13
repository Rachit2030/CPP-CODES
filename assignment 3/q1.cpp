#include<iostream>
using namespace std;
int mul(int x,int y)
{
    int z = x*y;
    return z;
}


int main()
{
    int x,y;
    cout<<"enter numbers"<<endl;
    cin>>x>>y;
    int z=mul(x,y);
    cout<<z<<endl;
}
