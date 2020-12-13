//
//  main.cpp
//  q1
//
//  Created by rachit goyal on 26/10/20.
//

#include <iostream>
using namespace std;

int main() {
    float  n1,n2;
    cout<<"hello"<<endl;
    
    try {
    cout << "Enter two nos:"<<endl;
    cin >> n1 >> n2;
    if (n2 == 0)
    throw "Divide by zero";
    else
    throw n1/n2;
    }
    
    catch ( char const*msg) {
        cout <<msg<<endl;
    }
    
    catch (float ans){
        cout << ans<<endl;
    }
    
    cout << "Done"<<endl;
    return 0;
}
