#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string p[20];
    cout<<"enter string"<<endl;
     getline(cin, p);
    for(int i=0;i<strlen(p);i++)
    {
       if(p[i]>=65 && p[i]<=92)
      {
	  p[i]=p[i]+32;
      }
    }
    cout<<p;

}
