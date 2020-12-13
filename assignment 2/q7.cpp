#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"enter rows and columns of the array"<<endl;
    cin>>m>>n;

    int **p=new int *[m];
    for(int i=0;i<m;i++)
    {
        p[i]=new int[n];
    }

    cout<<"enter array elements"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>p[i][j];
        }
    }
    cout<<endl<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
     cout<<endl<<endl;

    for(int i=0;i<m;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            sum+=p[i][j];
        }
        cout<<sum<<endl;
    }

    for(int i=0;i<m;i++)
    {
        delete [] p[i];
    }
    delete [] p;


}
