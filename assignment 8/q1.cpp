#include<iostream>
using namespace std;
#include<fstream>

int main(){
    fstream fin;
    fin.open("NOTES.TXT",ios::out);
    if(!fin){
    cout<<"error in loading the file"<<endl;
    return 0;
    }
    int i=0;
    for(i=0;i<=100;i++){
        fin<<i<<"\n";
    }
    fin.close();
    return 0;
}