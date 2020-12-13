#include<iostream>
using namespace std;
int main()
{
    for(int i=10;i>=1;i--)
    {
        cout<<i<<" ";
    }
    cout<<endl<<endl;
    for(int i=2;i<=20;i+=2)
    {
        cout<<i<<" ";
    }
    cout<<endl<<endl;
    for(float i=10;i<=20.5;)
    {
        cout<<i<<" ";
            i=i+3.5;
    }
    cout<<endl<<endl;
}
