#include<iostream>
using namespace std;
int main()
{
    int a,b;
    try
    {
        try
        {
            cout<<"enter values of two numbers"<<endl;
            cin>>a>>b;
            if(a-b==0)
            throw a;
        }
        catch(int x)
        {
            cout<<"\nException in inner try-catch block.";
            throw x;
        }
        }
        catch(int n)
        {
            cout<<"\nException in outer try-catch block.";
        }
    cout<<"\nEnd of program.";

}

