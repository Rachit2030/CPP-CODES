#include<iostream>
#include<cstring>
using namespace std;

class student{
private:

    string name;
    int roll_no;
    int marks[6];

public:

void getdata(){
    cout<<"Enter name of student"<<endl;
    getline(cin,name);
    cout<<"Enter roll number of student"<<endl;
    cin>>roll_no;
    cout<<"Enter marks of student in all subjects"<<endl;
    for(int i=0;i<6;i++){
        cout<<"enter marks in subject"<<i+1<<"\t";
        cin>>marks[i];
    }
}

void display(){
    cout<<endl<<endl;
    cout<<"name :"<<"\t"<<name<<endl;
    cout<<"roll number :"<<"\t"<<roll_no<<endl;
    cout<<"marks of student in all subjects are"<<endl;
    for(int i=0;i<6;i++){
        cout<<"marks in subject"<<i+1<<"\t"<<marks[i]<<endl;
    }
}

void tot_marks (){
    int sum =0;
    for(int i=0;i<6;i++){
        sum+=marks[i];
        }
    cout<<endl<<endl<<"total marks "<<sum<<endl;
}


};

int main(){
    student s1;
    s1.getdata();
    s1.display();
    s1.tot_marks();
}
