#include<iostream>
using namespace std;

class compare
{
private:
float n1,n2;
public:

void getdata()
{
cout<<"Enter elements  ";
cin>>n1>>n2;
}

friend float great(compare s1);
};

float great(compare s1)
{
 if(s1.n1>s1.n2)
return (s1.n1);
else
return(s1.n2);

}


int main()
{
compare x1;
x1.getdata();
cout<<"greater "<<great(x1);
}
