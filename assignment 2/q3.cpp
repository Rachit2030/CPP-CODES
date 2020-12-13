#include<iostream>
using namespace std;
int main()
{
    int n,fact1=1,fact2=1,x;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        fact1*=i;
    }
    cout<<fact1<<endl;
    cout<<endl;
    x=n;
    while(x>=1)
    {
        fact2*=x;
        x--;
    }
    cout<<fact2<<endl;
    cout<<endl;

}
