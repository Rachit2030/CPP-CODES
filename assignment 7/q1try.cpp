#include<iostream>
using namespace std;

class base{
protected:
    double a1,a2;
public:
    base(){
        cout<<"enter values"<<endl;
        cin>>a1>>a2;
    }
    virtual void display_area()=0;

};

class triangle : private base{
protected:
    double area;
public:
  void display_area(){
    area=0.5*a1*a2;
    cout<<"area of triangle is : "<<area<<endl;
  }
};

class rectangle : private base{
private:
    double area;
public:
    void display_area(){
        area=a1*a2;
        cout<<"area of rectangle is : "<<area<<endl;
    }
};

int main(){
    triangle a ;
    a.display_area();
    rectangle b ;
    b.display_area();
}

