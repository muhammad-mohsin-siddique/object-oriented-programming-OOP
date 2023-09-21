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

void bin_example()
{
    int pixels[3][3];

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            pixels[i][j] = 1 + i * j;
        }
    }

    ofstream fout("data.bin", ios::binary); //writing in the file

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
           fout.write((char*)&pixels[i][j], sizeof(int)); // here every integer written in the file
        }
    }

    fout.close(); // close the file if the writing is complete
    //you can view the file 


    //reseting the pixel // because to check whether the data after reading is correct 

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            pixels[i][j] = 0;
        }
    }

    // reading file 

    ifstream fin("data.bin" , ios::binary); // read the file 

    if(fin.fail()) //  also we can use it  (!fin) // fin simpley return the false is the file not open 
        cout<<"Failed to read the file data.bin"<<endl;
    else
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                fin.read((char*)&pixels[i][j], sizeof(int)); // reading the data from the file // becarefull to read the file you have to know the what data type you stored
            }
        }
    
    fin.close();

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << pixels[i][j] <<" ";
        }
        cout<<endl;
    }
}

int main()
{

    cout << "int: " << sizeof(int) << endl;
    cout << "char:" << sizeof(char) << endl;

    char_example();
    bin_example();


    return 0;
}