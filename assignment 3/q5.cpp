#include<iostream>
using namespace std;
#include<cstring>

struct cricket{
char name[20];
int age;
int test;
int avg_runs;
};
int main(){

struct cricket data[20];
int n;
cout<<"enter no of values u wish to enter"<<endl;
cin>>n;
cout<<endl;

for(int i=0;i<n;i++){
     cout<<"enter name of the cricketer"<<endl;
     cin>>data[i].name;
     cout<<" enter age "<<endl;
     cin>>data[i].age;
     cout<<"enter no.of test matches played "<<endl;
     cin>>data[i].test;
     cout<<"enter average runs scored in test matches"<<endl;
     cin>>data[i].avg_runs;
     cout<<endl;
}
cout<<"unsorted order is "<<endl<<endl;
for(int i=0;i<n;i++){
     cout<<" name of the cricketer "<<(i+1)<<" is :"<< "  "<< data[i].name<<endl;
     cout<<" age of cricketer :"<< "  "<< data[i].age<<endl;
     cout<<" no.of test matches played :"<< "  "<< data[i].test<<endl;
     cout<<" average runs scored in test matches :"<< "  "<< data[i].avg_runs<<endl<<endl;
}
struct cricket s1;
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
          if(data[j].avg_runs<data[i].avg_runs){
            s1=data[i];
            data[i]=data[j];
            data[j]=s1;
          }
    }

}

cout<<"sorted order is "<<endl<<endl;
for(int i=0;i<n;i++){
    cout<<" name of the cricketer "<<(i+1)<<" is :"<< "  "<< data[i].name<<endl;
     cout<<" age of cricketer :"<< "  "<< data[i].age<<endl;
     cout<<" no.of test matches played :"<< "  "<< data[i].test<<endl;
     cout<<" average runs scored in test matches :"<< "  "<< data[i].avg_runs<<endl<<endl;
}

}
