#include<iostream>
using namespace std;

class number
{
private:
float n1,n2;
public:

void getdata()
{
cout<<"Enter elements  ";
cin>>n1>>n2;
}

void display(){
cout<<n1<<" "<<n2;
}
friend number swapping(number);
};

number swapping(number s1)
{
 number p;
 p.n1=s1.n2;
 p.n2=s1.n1;
 return p;

}


int main()
{
number x1;
x1.getdata();
number x2=swapping(x1);
cout<<"values before swapping are :";
x1.display();
cout<<endl;
cout<<"values after swapping are :";
x2.display();
return 0;
}
