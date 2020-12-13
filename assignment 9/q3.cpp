//
//  main.cpp
//  q3
//
//  Created by rachit goyal on 27/10/20.
//

#include <iostream>
using namespace std;

int main() {
    try{
    float n1,n2;
    char x;
    cout<<"enter the numbers "<<endl;
    cin>>n1>>n2;
        if(n1==0)
            throw(0);
    
    try{
        cout<<"enter the operation u wish to perform"<<endl;
        cin>>x;
        switch(x){
            case '+':cout<<"the answer is :"<<n1+n2<<endl;break;
            case '-':cout<<"the answer is :"<<n1-n2<<endl;break;
            case '*':cout<<"the answer is :"<<n1*n2<<endl;break;
            case '/':cout<<"the answer is :"<<n1/n2<<endl;break;
            default:throw(x);
                
        }
    } catch(char i){
        cout<<"exception occured  "<<x<<" not an operator"<<endl;
    }
        
    }
    catch(int i){
        cout<<"exception occured : "<<"dividend is zero"<<endl;
    }
    return 0;

}

