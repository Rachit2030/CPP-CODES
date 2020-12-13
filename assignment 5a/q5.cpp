#include <iostream>
using namespace std;


class Distance
{
private:
 int meter;
public:
 Distance()
 {
 cout<<"Enter the distance: ";
 cin>>meter;
 }

 friend int add_five(Distance);

};


int add_five(Distance d)
{

 d.meter+=5;

 cout<<"\nnew distance : "<<d.meter;

}
int main()
{
 Distance first;
 add_five(first);
}
