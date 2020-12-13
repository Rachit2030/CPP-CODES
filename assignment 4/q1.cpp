#include<iostream>
#include<cstring>
using namespace std;

class student{//class of students
    private:
    string name;
    int age;
    int roll;
    int classes;
    char section;
public:
    void input()//function to enter all details of student object
    {
        cout<<"enter student name"<<endl;
        getline(cin,name);
        cout<<"enter student age"<<endl;
        cin>>age;
        cout<<"enter student roll number"<<endl;
        cin>>roll;
        cout<<"enter student class"<<endl;
        cin>>classes;
        cout<<"enter student section"<<endl;
        cin>>section;

    }

    void display() const//function to display all details of student object
    {
         cout<<"the details entered are"<<endl;
    cout<<"name :"<<name<<endl<<"age :"<<age<<endl<<"roll number :"<<roll<<endl<<"class :"<<classes<<endl<<"section :"<<section<<endl;
    }
};

int main()
{
    student s1;
    s1.input();
    s1.display();
}
