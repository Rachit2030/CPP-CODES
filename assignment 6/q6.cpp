#include<iostream>
using namespace std;

class number{
private:
    int a;
    float b;
public:
    number(int a,float b){
    this->a=a;
    this->b=b;
    }
    void operator++(){ //pre increment
    ++a;
    ++b;
    }

     void operator++(int){ //post increment
    a++;
    b++;
    }


    void display() {
        cout << a << "\t" << b << endl;
    }
};

int main(){
number x1(2,5.5);
number x2(4,8.1);
cout<<"before incrementing"<<endl;
x1.display();
++x1;
cout<<"after pre incrementing "<<endl;
x1.display();
cout<<endl<<endl;
cout<<"before incrementing"<<endl;
x2.display();
x2++;
cout<<"after post incrementing"<<endl;
x2.display();
}
