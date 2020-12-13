#include<iostream>
using namespace std;
 class complex{
 private:
    float real;
    float imag;
public:
    complex(){
    real=0;
    imag=0;
    }

    complex(float x){
    real=x;
    imag=0;
    }

    complex(float x, float y){
    real=x;
    imag=y;
    }

    friend void display(complex x1);
    friend complex add(complex x1,complex x2);

 };

 void display(complex x1){
    cout<<x1.real<<" "<<"+"<<" "<<"i"<<x1.imag<<endl;
 }

 complex add(complex x1,complex x2){
    complex temp;
    temp.real=x1.real+x2.real;
    temp.imag=x1.imag+x2.imag;
    return temp;
}

int main(){
complex a(1.56,4.59);
complex b(2.31,6.12);
cout<<" first object is : ";
display(a);
cout<<endl;
cout<<" second object is : ";
display(b);
cout<<endl;
complex c;
c=add(a,b);
cout<<" addition object is : ";
display(c);
cout<<endl;
return 0;
}

