#include<iostream>
#include<fstream>
#include<string>
using namespace std;


void char_example(){

    ofstream fout;
    string filename = "sample.txt";

    string line = "My test line ... ";

    fout.open(filename); // you can open with append mode now it is by defualt trancate mode
    fout << line << endl;

    fout.close();

    ifstream fin;

    file.open("sample.txt");

    string line;

    while(fin)
    {

        getline(fin, line);
        cout << line << endl;
    }

    fin.close();
}

int main()
{

    cout << "int: " << sizeof(int) << endl;
    cout << "char:" << sizeof(char) << endl;

    char_example();


    return 0;
}