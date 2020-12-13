#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void input()
{
    fstream fout;
    char ch;
    fout.open("string.txt", ios::out);
    if(!fout){
        cout<<"error in loading the file"<<endl;
    }
    cout<<"enter text:"<<endl;
    do
    {
        cin.get(ch);
        fout.put(ch);

    } while (ch != '\n');
    fout.close();

    cout << "\nData written in the file successfully."<<endl;
    
}

void len()
{
    fstream fin;
    char ch;
    int len = 0;
    fin.open("String.txt", ios::in);
    if (!fin)
    {
        cout << "Error reading the file";
    }
    do
    {
        fin.get(ch);
        len++;

    } 
    while (ch != '\n');

    cout << "Length is : "<<len - 1<<endl;

    fin.seekg(0);
    fin.close();
}
void read()
{
    fstream fin;
    char ch;
    fin.open("String.txt", ios::in);
    if (!fin)
    {
        cout << "Error reading the file";
    }
    do
    {
        fin.get(ch);
        cout << ch;

    } while (ch != '\n');
    fin.seekg(0);
    fin.close();
}

int main()
{
    input();
    cout<<"Reading the file :"<<endl;
    read();
    len();

}

