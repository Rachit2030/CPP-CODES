#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	char ch;
	int count=0;
	fstream fin;
	fin.open("OUT.txt",ios::in);
    if(!fin){
        cout<<"error in loading file"<<endl;
        return 0;
    }
	while(!fin.eof())
	{
		fin.get(ch);
		if((ch>=48&&ch<=57) || (int(ch)>=65&&int(ch)<=90) || (int(ch)>=97&&int(ch)<=122))
		count++;
	}
	cout<<count;
	return 0;
}