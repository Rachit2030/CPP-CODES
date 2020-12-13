#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char *p=new char[20];
    char *q=new char[20];
    cout<<"enter string"<<endl;
    cin>>p;
    for(int i=0;i<strlen(p);i++)
    {
      q[i]=p[i];
    }
    cout<<p<<" "<<q;

    delete [] p;
    delete [] q;
}
