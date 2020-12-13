#include<iostream>
#include<cstring>
using namespace std;

class manager{//class of students
    private:
    char name[20];
    int age;
    int id_number;
    int salary;
    int experience;
public:
    void input()//function to enter all details of student object
    {
        cout<<"enter manager name"<<endl;
        cin>>name;
        cout<<"enter manager age"<<endl;
        cin>>age;
        cout<<"enter manager ID number"<<endl;
        cin>>id_number;
        cout<<"enter manager salary"<<endl;
        cin>>salary;
        cout<<"enter manager experience"<<endl;
        cin>>experience;
        cout<<endl;

    }

    void display() //function to display all details of student object
    {
         cout<<"the details entered are"<<endl;
    cout<<"name :"<<name<<endl<<"age :"<<age<<endl<<"ID number :"<<id_number<<endl<<"salary :"<<salary<<endl<<"experience :"<<experience<<endl;
    cout<<endl;
    }
};

int main()
{
    int n;
    cout<<"enter number of managers"<<endl;
    cin>>n;
    manager s1[n];
    for( int i=0; i<n; i++ )
	{
		cout << "manager " << i + 1 << endl;
		s1[i].input();
	}
	for( int i=0; i<n; i++ )
	{
		cout << "manager " << i + 1 << endl;
        s1[i].display();
        cout<<endl;
	}

}
