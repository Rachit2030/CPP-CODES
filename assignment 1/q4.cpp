#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter till what number you wish to find"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int flag=0;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag++;
                break;
            }
        }
        if(flag==0&&i!=1)
        cout<<i<<"\t";

    }
}
