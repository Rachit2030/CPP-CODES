#include<iostream>
using namespace std;

class mean
{
private:
int n;
int *arr = new int [n];
public:

void getdata()
{
cout<<"Enter no of elements u wish to enter ";
cin>>n;
cout<<"Enter values ";
for(int i=0;i<n;i++)
cin>>arr[i];
}

friend float Mean (mean s1);
};
float Mean(mean s1)
{
 float sum=0;
     for(int i=0;i<s1.n;i++)
        sum+=s1.arr[i];
        cout<<"sum :"<<sum<<endl<<endl;
        cout<<"no of terms :"<<s1.n<<endl<<endl;
    float x=sum/s1.n;
    return x;
}


int main()
{
mean x1;
x1.getdata();
cout<<"Mean "<<Mean(x1);
}
