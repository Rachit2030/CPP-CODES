#include<iostream>
using namespace std;

class Distance{//declaring class
private:
    int feet;
    float inches;
public:
    void set(int x,float y)//set function to set values
    {
        feet=x;
        inches=y;
        simplify();
    }

    void simplify(){//this function converts inches to feet is inches greater than 12
        while(1)
    if(this->inches>=12){
        this->feet=this->feet+1;
        this->inches=this->inches-12;
    }
    else
        break;
    }

    void display()//display attributes
    {
        simplify();//this is called in order to simplify the object in which addition data is stored
        cout<<endl<<"feet is "<<" "<<feet<<" "<<"inches is "<<" "<<inches<<endl;
    }

    Distance add(Distance s1){//this will add values of two objects and return the values in main
        Distance n;
    n.feet=this->feet+s1.feet;
    n.inches=this->inches+s1.inches;
    return n;
    }
};

int main(){

Distance s1,s2,s3;
s1.set(5,15.5);
s2.set(3,22.5);
s1.display();
s2.display();
s3=s1.add(s2);
s3.display();


}
