#include <iostream>
using namespace std;

void check() throw(int, char) {
    int x;
    cout<<"0 for exception of int\n1 for exception of char\n2 for exception of double"<<endl;
    cin>>x;
    if (x==0) throw x;     // throw int
    if (x==1) throw 'a';   // throw char
    if (x==2) throw 3.2;  // throw double
}


int main( ) {

try {
check();
}
catch(int i) {
cout << "Exception Caught int\n";
}
catch(char c) {
cout << "Exception Caught char\n";
}
catch(double c) {
cout << " Exception Caught double\n";
}
return 0;

}
