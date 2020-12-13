#include<iostream>
using namespace std;
int main()
{
    float x,y;
    int a;
    cout<<"enter values of x and y"<<endl;
    cin>>x>>y;
    do{
        cout<<"1 for add"<<endl<<"2 for sub"<<endl<<"3 for mul"<<endl<<"4 for div"<<endl<<"5 for break"<<endl<<"enter ur choice"<<endl;
        cin>>a;
        switch(a)
        {
            case 1:{cout<<x+y<<endl;
                    break;}
            case 2:{cout<<x-y<<endl;
                    break;}
            case 3:{cout<<x*y<<endl;
                    break;}
            case 4:{cout<<x/y<<endl;
                    break;}
        }
    }
    while(a!=5);
}
