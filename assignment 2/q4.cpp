#include<iostream>
using namespace std;
int main()
{
    int n,a=1,b=1,c;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<a<<" ";
        c=a+b;
        a=b;b=c;
    }
    cout<<endl<<endl;
    a=1,b=1;
    int x=n;
    while(x!=0)
    {
       cout<<a<<" ";
        c=a+b;
        a=b;b=c;
        x--;
    }
}
