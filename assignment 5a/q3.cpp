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

    friend void display(student s1) ;//function to display all details of student object

};
void display(student s1){
         cout<<"the details entered are"<<endl;
    cout<<"name :"<<s1.name<<endl<<"age :"<<s1.age<<endl<<"roll number :"<<s1.roll<<endl<<"class :"<<s1.classes<<endl<<"section :"<<s1.section<<endl;
    cout<<endl;
    }
int main()
{
    student x1;
    x1.input();
    display(x1);
}
