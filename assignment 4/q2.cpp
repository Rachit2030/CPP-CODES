#include<iostream>
using namespace std;

class bank{//declaring the class
    public:
    char name[10];
    int ac_number;
    int balance;
    char type[20];

    void password(){//main function to access all the features of bank . this provides extra safety as it's a bank class.
    int pass;
        cout<<"enter the account password"<<endl;
        cin>>pass;
        cout<<endl;
        if (pass!=123)//any incorrect password will lead to exit out of the function
        return;
        else{
             int a;
             do{
                cout<<"1 for display"<<endl<<"2 for deposit"<<endl<<"3 for withdraw"<<endl<<"4 for end"<<endl<<"enter ur choice"<<endl;
                cin>>a;
                switch(a)//to display menu of what user can perform
                    {
                        case 1:{display();
                                break;}
                        case 2:{deposit();
                                break;}
                        case 3:{withdraw();
                                break;}
                    }
            }
            while(a!=4);
            }
    }



    bank(){//constructor to initialize balance from 0
    balance=0;
    }

    void input()//take all necessary inputs while creating an object
    {
        cout<<"enter name"<<endl;
        cin>>name;
        cout<<"enter account number"<<endl;
        cin>>ac_number;
        cout<<"enter type of account"<<endl;
        cin>>type;
    }
private://these unctions are private to provide extra safety so that no one from outside has direct access to credentials
    void display()//display name and balance
    {

        cout<<"name :"<<" "<<name<<endl;
        cout<<"balance :"<<" "<<balance<<endl;
    }

    void deposit()//check password and will deposit amount
    {
        int pass;
        cout<<"enter the account password"<<endl;
        cin>>pass;
        cout<<endl;
        if (pass!=123)
        return;
        int x;
        cout<<"enter the amount to deposit"<<endl;
        cin>>x;
        balance=balance+x;
    }

    void withdraw()//check password and withdraw amount
    {
        int pass;
        cout<<"enter the account password"<<endl;
        cin>>pass;
        cout<<endl;
        if (pass!=123)
        return;
        cout<<"account balance :"<<" "<<balance<<endl;
        int x;
        cout<<"enter the amount to withdraw"<<endl;
        cin>>x;
        if(x>balance)
        {
            cout<<"low acccount balance"<<endl;
                return;
        }
        else
        {
            balance=balance-x;
            cout<<"amount withdrawed pleasse collect the cash"<<endl;
        }



    }

};


int main()
{
    bank a1;
    a1.input();
    a1.password();

}
