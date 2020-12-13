#include<iostream>
#include<cstring>
using namespace std;



class car{
public:
    int a;
    static int b;

car()
{
a++;
b++;
}

};
int car::b=0;
int main(){
    car s1,s2;
cout<<"normal variable "<<s1.a<<endl;
cout<<"normal variable "<<s2.a<<endl;
cout<<"static variable "<<car::b<<endl;
}
