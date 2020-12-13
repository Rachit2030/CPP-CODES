#include<iostream>
using namespace std;


class publication{
private:
    char title[50];
    float price;

    void get_data(){
        cout<<"enter title "<<endl;
        cin>>title;
        cout<<"enter price "<<endl;
        cin>>price;
        }
    void put_data(){
        cout<<"title is : "<<"\t"<<title<<endl;
        cout<<"price is : "<<"\t"<<price<<endl;
    }
public:
    void check1(){
    get_data();
    }
    void check2(){
    put_data();
    }

};

class book : private publication{
private:
    int page_count;
public:
    void get(){
        check1();
        cout<<"enter no of pages of book"<<endl;
        cin>>page_count;
}
    void putdata(){
        check2();
        cout<<"no of pages of book are : "<<"\t"<<page_count<<endl;
    }
};
class tape : private publication{
private:
    float playing_time;
public:
    void getdata(){
        check1();
        cin>>playing_time;
        cout<<endl;
}
     void putdata(){
        check2();
        cout<<"playing time of tape is : "<<"\t"<<playing_time<<endl;
    }
};

int main(){
book a;
a.check1();
a.check2();
tape b;
b.check1();
b.check2();
}
