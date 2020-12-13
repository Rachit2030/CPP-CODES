#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string line;
    ofstream fout;
    ifstream fin;

    int no;
    cout << "Enter no of lines you wish to enter: ";
    cin >> no;
    
    fout.open("file1.txt");
    if(!fout){
        cout<<"error loading the file"<<endl;
        return 0;
    }

    for (int i = 0; i < no; i++)
    {
        cin >> line;
        fout << line << endl;
    }

    fout.close();

    fin.open("file1.txt");
    if(!fin){
        cout<<"error loading the file"<<endl;
        return 0;
    }
    fout.open("copy.txt");
    if(!fout){
        cout<<"error loading the file"<<endl;
        return 0;
    }

    while (getline(fin, line))
    {
        fout << line << endl;
    }

    fin.close();
    fout.close();
}