#include<iostream>
using namespace std;

class base{
protected:
    double a1,a2;
public:
    void getdata(){
        cout<<"enter values"<<endl;
        cin>>a1>>a2;
    }
    virtual void display_area(){
        cout<<"base class "<<endl;
    }

};

class triangle : public base{
protected:
    double area;
public:
  void display_area(){
    area=0.5*a1*a2;
    cout<<"area of triangle is : "<<area<<endl;
  }
};

class rectangle : public base{
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
    a.triangle :: getdata();
    a.triangle :: display_area();
    rectangle b ;
    b.rectangle ::getdata();
    b.rectangle :: display_area();
}
