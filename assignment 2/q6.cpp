#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no of elements in array"<<endl;
    cin>>n;
    int *p= new int[n];
    cout<<"enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if (p[j]<=p[i])
            {
                int temp=p[i];
                p[i]=p[j];
                p[j]=temp;

            }
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<" ";
    }
    delete [] p;
}
