#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class bank
{

private:
    int ac_no;
    int money;

public:
    void getData()
    {
        cout<<"enter account number :"<<endl;
        cin >> ac_no;
        cout<<"enter money in account :"<<endl;
        cin >> money;
    }

    void showData()
    {
        cout << "The following are details \n";
        cout << "Account No : " << ac_no<<endl;
        cout << "Money : " << money<<endl;
    }
};


int main()
{
    bank s1;
    fstream object;
    object.open("bank.txt", ios::in | ios::out | ios::binary);
    if (!object)
    {
        cout << "Error in file";
    }
    s1.getData();
    object.write((char *)&s1, sizeof(s1));
    object.seekg(0);

    object.read((char *)&s1, sizeof(s1));
    s1.showData();
    object.close();
    return 0;
}