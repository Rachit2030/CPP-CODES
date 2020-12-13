#include <iostream>
using namespace std;
class matrix{
	int r,c,**a;
	public:
		matrix(int row,int col)
		{
			int i;
			r = row;
			c = col;
			a = new int*[r];
			for(i=0;i<c;i++)
			a[i] = new int[c];
		}
		void getdata()
		{
			int i,j;
			cout<<"Enter elements\n";
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					cin>>a[i][j];
				}
			}
		}
		void show()
		{
			int i,j;
			cout<<"Matrix:"<<endl;
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					cout<<a[i][j]<<"  ";
				}
				cout<<endl;
			}
		}
		void mul(matrix m2)
		{
			matrix m1(r,m2.c);
			int i,j,k,sum=0;
			for (i=0;i<r;i++ )
			{
				for (j=0;j<m2.c;j++)
				{
					for (k=0;k<m2.r;k++)
					{
						sum = sum + a[i][k]*m2.a[k][j];
					}
					m1.a[i][j] = sum;
					sum = 0;
				}
			}
			m1.show();
		}
};
int main()
{
	int x,y;
	cout<<"Enter the dimensions for first matrix: ";
	cin>>x>>y;
	matrix m1(x,y);
	m1.getdata();
	m1.show();
	cout<<"Enter the dimensions for second matrix: ";
	cin>>x>>y;
	matrix m2(x,y);
	m2.getdata();
	cout<<"\nMatrix after multiplication:"<<endl;
	m2.show();
	m1.mul(m2);
}
