#include<iostream>
using namespace std;

struct complex {
    float real;
    float imag;
};

complex add(complex n1, complex n2) {
    complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return (temp);
}

complex sub(complex n1, complex n2) {
    complex temp;
    temp.real = n1.real - n2.real;
    temp.imag = n1.imag - n2.imag;
    return (temp);
}

void display(complex n1){
cout<<"->"<<n1.real<<" "<<"+"<<" "<<"i"<<n1.imag<<endl;
}

int main(){


struct complex s1,s2,s3,s4;
cout<<"enter real part of complex number 1"<<endl;
cin>>s1.real;
cout<<"enter imaginary part of complex number 1"<<endl;
cin>>s1.imag;
cout<<endl;
cout<<"enter real part of complex number 2"<<endl;
cin>>s2.real;
cout<<"enter imaginary part of complex number 2"<<endl;
cin>>s2.imag;

s3=add(s1,s2);
s4=sub(s1,s2);
cout<<endl;
display(s1);
display(s2);
display(s3);
display(s4);
}
