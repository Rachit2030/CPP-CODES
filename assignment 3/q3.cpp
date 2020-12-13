#include<iostream>
using namespace std;
void swap1(int x,int y)
{
    int temp=x;
    x=y;
    y=temp;
    cout<<"swapped values by call by value are"<<endl;
    cout<<x<<"   "<<y<<endl;
}
void swap2(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int x,y;
    cout<<"enter the numbers"<<endl;
    cin>>x>>y;
    swap1(x,y);
    swap2(&x,&y);
    cout<<"swapped values by call by reference are"<<endl;
    cout<<x<<"   "<<y<<endl;

}
