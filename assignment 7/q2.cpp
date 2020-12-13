#include<iostream>
using namespace std;

class student{
protected:
    char name[20];
    int rollnumber;
public:
    student(){
        cout<<"enter name"<<endl;
        cin>>name;
        cout<<"enter roll number"<<endl;
        cin>>rollnumber;
    }

};

class exam : public student{
protected:
    float marks[5];
public:
    exam(){
        cout<<"enter marks scored in 5 subjects"<<endl;
        for(int i=0;i<5;i++){
            cout<<"enter marks in subject "<<i+1<<" : ";
            cin>>marks[i];
            cout<<endl;
        }

}
    void putdata(){
        cout<<"marks obtained are :"<<endl;
        for( int i=0;i<5;i++)
        cout<<"marks in subject "<<i+1<<" are : "<<marks[i]<<endl;
    }
};

class result : private exam{
private:
    float total,avg;
public:
    void tot_marks(){
        for(int i=0;i<5;i++){
            this->total+=this->marks[i];}
    }
    void avg_marks(){
        this->avg=this->total/5;
    }

    void putdata(){
        tot_marks();
        avg_marks();
        cout<<"total marks are : "<<"\t"<<total<<endl;
        cout<<"average marks are : "<<"\t"<<avg<<endl;
    }

};


int main(){
    result a;
    a.putdata();
}
