//
//  main.cpp
//  q2
//
//  Created by rachit goyal on 26/10/20.
//

#include <iostream>
using namespace std;
#include <cstring>

class user{
private:
    int age,income;
    char vehicle;
    string city;
public:
    user(){
        age=0;
        income=0;
    }
    void getdata(){
        cout<<"enter age : "<<endl;
        cin>>this->age;
        
        if(this->age<18||this->age>55)
            throw 1;
        
        cout<<"enter income per month : "<<endl;
        cin>>this->income;
        
        if(this->income<50000||this->income>100000)
            throw 2;
        
        cout<<"enter city : "<<endl;
        cin>>this->city;
        
        if(this->city!="pune"||this->city!="mumbai"||this->city!="bangalore"||this->city!="chennai")
            throw 3;
        
        cout<<"do you have a 4-wheeler "<<endl<<"type y for yes and n for no "<<endl;
        cin>>this->vehicle;
        
        if(this->vehicle=='n')
            throw 4;
        
        
    }
};
int main() {
    user x;
    try{
        x.getdata();
    }
        catch( int i){
        switch(i){
            case 1:cout<<"age not in desired range"<<endl;break;
            case 2:cout<<"income not in desired range"<<endl;break;
            case 3:cout<<"city not as required "<<endl;break;
            case 4:cout<<"user does not have 4-wheeler"<<endl;break;
        }
        }
        return 0;
}
