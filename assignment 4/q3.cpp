#include<iostream>
using namespace std;

class complex{//declaring class of complex numbers
    private:
    	float real;
    	float imaginary;
    public:

    complex(){//constructor to initialize complex number values to 0
     this->real=0;
     this->imaginary=0;

    }
    void set(float real,float imaginary){//set function to set values in object of class complex
        this->real=real;
        this->imaginary=imaginary;
    }

    void print(){//this would print complex number in iota form
        cout<<real<<" "<<"+"<<" "<<"i"<<imaginary<<endl;
    }

    complex sum(complex c2){//this will find sum of 2 complex numbers and store the sum in third temporary object of class complex and the object to main
        complex c3;
        c3.real=this->real+c2.real;
        c3.imaginary=this->imaginary+c2.imaginary;
        return c3;
    }

};

int main()
{
    float r1,r2,i1,i2;
    cout<<"enter values of first complex number"<<endl;
    cin>>r1>>i1;
    cout<<endl;
    cout<<"enter values of second number"<<endl;
    cin>>r2>>i2;
    complex n3,n2,n1;//creating objects
    n1.set(r1,i1);//setting values
    n2.set(r2,i2);//setting values
    n3=n1.sum(n2);//storing sum in n3 object
    cout<<endl<<endl<<"all the complex numbers are"<<endl;
    n1.print();
    n2.print();
    n3.print();
}
