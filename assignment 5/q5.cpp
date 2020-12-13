#include <iostream>
using namespace std;
class rough{
private:
	static int count;
public:

		rough()
		{
			count++;
		}

		static void show_count()
		{
			cout<<"Total no of Objects are: "<<count;
		}
};
int rough::count=0;
int main()
{
	rough s1,s2,s3,s4,s5,s6,s7,s8;
	s1.show_count();
	cout<<"\n";
	rough::show_count();
}
