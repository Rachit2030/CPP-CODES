#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the numbers"<<endl;
    cin>>a>>b;
    int temp;
    temp=a^b;
    a=temp^a;
    b=temp^b;
    cout<<"value after swapping of a and b are :"<<a<<" "<<b<<endl;

}
