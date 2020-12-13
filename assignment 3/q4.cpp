#include<iostream>
using namespace std;

int sum(int *p){
int s=0;
for(int i=0;i<5;i++){
    s+=*p;
    *p++;
}
return s;
}
void address(int *p){
    cout<<"addresses of each elements are: "<<endl;
    for(int i=0;i<5;i++){
        cout<<p[i]<<"    "<<&p[i]<<endl;
    }
}

int main(){
int *p= new int[5];
cout<<"enter array elements"<<endl;
for(int i=0;i<5;i++)
cin>>p[i];
int x=sum(p);
cout<<"address of pointer pointing to array is"<<&p<<endl<<endl;
cout<<"sum of array elements is:"<<x<<endl<<endl;
cout<<"base address is"<<&p[0]<<endl<<endl;

address(p);
delete [] p;
}
