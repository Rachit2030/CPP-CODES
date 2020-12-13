#include <iostream>
#include <cstring>

using namespace std;

struct student
{
  string name;
  int roll_no;
  int classes;
  char section;
};

int main(){

	struct student *x;
	int n;
	cout<<"Enter no of student's data you wish to enter"<<endl;
	cin>>n;
	x=new student[n];

	for(int i=0; i<n; i++){
		cout << "Student " << i + 1 << endl;
		cout << "Enter roll no" << endl;
		cin >> x[i].roll_no;
		cout << "Enter name" << endl;
		cin >> x[i].name;
		cout << "Enter class" << endl;
		cin >> x[i].classes;
		cout << "Enter section" << endl;
		cin >> x[i].section;
		cout<<endl<<endl;
	}

	for(int i=0; i<n; i++){
		cout << "Student " << i + 1 << endl;
		cout << "Name : " << x[i].name << endl;
		cout << "Roll no : " << x[i].roll_no << endl;
		cout << "Class : " << x[i].classes << endl;
		cout << "Section : " << x[i].section << endl;
		cout<<endl;
	}
	delete [] x;
	return 0;
}
