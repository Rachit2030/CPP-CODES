#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

class compare
{
private:
    char a[30];
public:

    void getdata(){
        cout<<"enter string "<<endl;
        cin>>a;
    }
    void display(){
        cout<<"string is : "<<"\t"<<a<<endl;
    }

    compare operator+(compare s1){
        compare temp;
        strcpy(temp.a,this->a);
        strcat(temp.a,s1.a);
        return temp;
    }

    int operator==(compare s1){
        if(strcmp(this->a,s1.a)==0)
            return 1;
        else
            return 0;
    }
};

int main()
{
    compare a,b,c;
    a.getdata();
    b.getdata();
    c=a+b;
    c.display();
    if(a==b)
        cout<<"equal"<<endl;
    else
        cout<<"not equal"<<endl;
}
