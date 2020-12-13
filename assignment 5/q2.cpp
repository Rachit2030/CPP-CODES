#include<iostream>
#include<cstring>
using namespace std;

class student{//class of students
    private:
    char name[20];
    int age;
    int roll;
    int classes;
    char section;
public:
    void input()//function to enter all details of student object
    {
        cout<<"enter student name"<<endl;
        cin>>name;
        cout<<"enter student age"<<endl;
        cin>>age;
        cout<<"enter student roll number"<<endl;
        cin>>roll;
        cout<<"enter student class"<<endl;
        cin>>classes;
        cout<<"enter student section"<<endl;
        cin>>section;

    }

    void display() //function to display all details of student object
    {
         cout<<"the details entered are"<<endl;
    cout<<"name :"<<name<<endl<<"age :"<<age<<endl<<"roll number :"<<roll<<endl<<"class :"<<classes<<endl<<"section :"<<section<<endl;
    cout<<endl;
    }
};

int main()
{
    int n;
    cout<<"enter number of students"<<endl;
    cin>>n;
    student s1[n];
    for( int i=0; i<n; i++ )
	{
		cout << "Student " << i + 1 << endl;
		s1[i].input();
	}
	for( int i=0; i<n; i++ )
	{
		cout << "Student " << i + 1 << endl;
        s1[i].display();
	}

}
