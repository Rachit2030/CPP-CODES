#include<iostream>
using namespace std;

struct date{
	int day;
	int month;
	int year;
};


void input()
{
	date a;
	cout<<"Enter the day"<<endl;
	cin>>a.day;
	cout<<"Enter the month"<<endl;
	cin>>a.month;
	cout<<"Enter the year"<<endl;
	cin>>a.year;
}



void check()
{
	date a;
	if((a.month)<1||(a.month>12)||(a.day<1)||(a.day>31)){
		cout<<"The date is invalid"<<endl;
		return;}

	if(a.month==2){
		if(((a.year % 4 == 0)&&(a.year % 100 != 0))||(a.year % 400 == 0)&&(a.day<=29))
			cout<<"The date is valid"<<endl;

		else if(a.day<=28)
			cout<<"The date is valid"<<endl;

		else
			cout<<"The date is invalid"<<endl;

		return ;
	}
	if ((a.month == 4 || a.month == 6 ||a.month == 9 || a.month == 11)&&(a.day<=30))
        cout<<"The date is valid"<<endl;
  	else if ((a.month == 1 || a.month == 3 ||a.month == 5 || a.month == 7||a.month == 8||a.month == 10||a.month == 12)&&(a.day<=31))
        cout<<"The date is valid"<<endl;
    else
    	cout<<"The date is invalid"<<endl;

}
int main()
{
	input();
	check();
}
