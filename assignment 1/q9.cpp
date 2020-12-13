#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter no.of days"<<endl;
    cin>>x;
    if(x<=5)
    cout<<"fine is 50 paisa"<<endl;
    else if(x>=6&&x<=10)
    cout<<"fine is 1 rupee "<<endl;
    else if(x>=11&&x<=30)
    cout<<"fine is 5 rupees"<<endl;
    else if(x>30)
    cout<<"membership cancelled"<<endl;

}
