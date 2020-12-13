#include<iostream>
#include<cmath>
using namespace std;

class triangle{
private:
    float a,b,c;
public:

    triangle(float s1,float s2,float s3){
        a=s1;
        b=s2;
        c=s3;
        check();
    }
   void check(){
    if((a+b)>c&&(b+c)>a&&(c+a)>b){

        if(a==b&&b==c){
            area(a);
        }

        else if((a*a+b*b-c*c==0)||(c*c+b*b-a*a==0)||(a*a+c*c-b*b==0)){

            if(a*a+b*b-c*c==0)
                area(a,b);
            else if(c*c+b*b-a*a==0)
                area(c,b);
            else
                area(a,c);
        }

        else if (a==b||b==c||c==a){
            area(a,b,c);
        }

        else {
            area(a,b,c);
        }

   }

   else{
    cout<<"triangle not possible "<<endl;
    return;
   }
   }

   void area(float a){
       float area=(pow(3,0.5)/4)*pow(a,2);
       cout<<"Triangle is equilateral and its area is : "<<area<<endl<<endl;
   }
   void area(float a,float b){
       float area=0.5*a*b;
       cout<<"Triangle is right angled and its area is : "<<area<<endl<<endl;
   }
   void area(float a,float b,float c){
    float s;
    s=(a+b+c)/2;
    float area,x;
    x=s*(s-a)*(s-b)*(s-c);
    area=pow(x,0.5);
    if(a==b||b==c||c==a)
    cout<<"Triangle is isosceles and its area is : "<<area<<endl<<endl;
    else
    cout<<"Triangle is scalene and its area is : "<<area<<endl<<endl;
   }

};

int main(){
    float x1,y1,z1;
    cout<<"enter three sides of triangle"<<endl;
    cin>>x1>>y1>>z1;
    triangle a(x1,y1,z1);
    return 0;
}
