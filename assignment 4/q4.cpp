#include<iostream>
using namespace std;

class rectangle{//declaring class
private:
    float length;
    float width;
public:
    void setlength(float l) {//this will set length to object of class rectangle
      length = l;
    }

    void setwidth(float l) {//this will set width to object of class rectangle
      width = l;
    }

    int getlength() {//this will return length of object
      return length;
    }

    int getwidth() {//this will return width of object
      return width;
    }

    float perimeter(){//this will compute perimeter and return its value
        float x;
        x=2*(length+width);
        return x;
    }

    float area(){//this will compute area and return its value
        float x;
        x=length*width;
        return x;
    }

    void show(){//this will display atributes of object
    cout<<"length is :"<<length<<endl<<"width is :"<<width<<endl;
    }

    int sameArea(rectangle s1){//this function will check whether areas are same or not. If same then will return 1 otherwise 0
    if(this->area()==s1.area())
        return 1;
    else
        return 0;

    }

};

int main()
{
    rectangle a;
    rectangle b;
    rectangle c=a;//copy attributes of a to c
    a.setlength(5);//setting length of rectangle a
    a.setwidth(2.5);//setting width of rectangle a
    cout<<"area of rectangle 1 : "<<a.area()<<endl;
    cout<<"perimeter of rectangle 1 : "<<a.perimeter()<<endl<<endl;
    b.setlength(5);//setting length of rectangle b
    b.setwidth(18.9);//setting width of rectangle b
    cout<<"area of rectangle 2 : "<<b.area()<<endl;
    cout<<"perimeter of rectangle 2 : "<<b.perimeter()<<endl<<endl;
    if(a.sameArea(b)==1)//check if areas are equal
    cout<<"rectangles are equal"<<endl;
    else
    cout<<"rectangles are not equal"<<endl;
    //instead of changing value of rectangle a  i changed value of rectangle c as both are equal
    c.setlength(15);//changing length of rectangle c
    c.setwidth(6.3);//changing width of rectangle c
    cout<<endl;
    cout<<"area of rectangle 1 value changed : "<<c.area()<<endl;
    cout<<"perimeter of rectangle 1 value changed: "<<c.perimeter()<<endl<<endl;
    if(c.sameArea(b)==1)
    cout<<"rectangles are equal"<<endl;
    else
    cout<<"rectangles are not equal"<<endl;
}
