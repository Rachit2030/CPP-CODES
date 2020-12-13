//
//  main.cpp
//  q6
//
//  Created by rachit goyal on 27/10/20.
//

#include <iostream>
using namespace std;
#include <cstring>

class user{
private:
    string username,pass;
public:
    user(){
        username='0';
        pass='0';
    }
    void getdata(){
        cout<<"enter the username"<<endl;
        cin>>username;
        cout<<"enter password"<<endl;
        cin>>pass;
        float x=pass.length();
        if(x<6){
            throw 1;
        }
        int i=0,count=0;
        while ( i<=x){
            if(pass[i]>=48&&pass[i]<=57)
            {
                count=1;
                break;
            }
            else
            i++;
        }
            if(count==0)
            throw "password does not contain a number ";
    }
};


int main() {
    user a1,a2;
    try{
        a1.getdata();
        a2.getdata();
    }
    catch(int i){
        cout<<"exception caught"<<endl<<"length of password less than 6 numbers "<<endl;
    }
    catch(char const* s){
        cout<<"exception caught"<<endl<<s<<endl;
    }
    return 0;

}





