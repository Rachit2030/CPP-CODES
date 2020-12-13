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
     cout<<"transpose is"<<endl;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<p[j][i]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<m;i++)
    {
        delete [] p[i];
    }
    delete [] p;
}
