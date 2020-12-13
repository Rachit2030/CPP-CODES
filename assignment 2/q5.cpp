#include<iostream>
using namespace std;
int main()
{
    int *p= new int[10];
    cout<<"enter array elements"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>p[i];
    }
    int max=p[0];
    for(int i=0;i<10;i++)
    {
        if (p[i]>=max)
            max=p[i];
    }
    cout<<"largest element is "<<endl;
    cout<<max;
    delete [] p;
}
