#include <iostream>
using namespace std;

struct student
{
    string name;
    int rollName;
};

void test_array()
{
    int array[10];

    for (int i = 0; i < 10; i++)
    {
        array[i] = i * i;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << endl;
    }
}


void test_string(){
    char a[] = "Hello";

    cout<< a << endl;

    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << endl;

        if(a[i] == '\0')
            cout<<"NULL Terminator Found"<<endl;
        // print each character separatly
    }
 
    string name = "Ali";

    cout << name << endl;

    cout<< name[0] << endl;


    name.empty(); // return true if string is empty otherwise return false
    
}

void test_struct()
{
    student s1;

    s1.name = "Ali";
    s1.rollName = 4487;

    cout << "Name : " << s1.name << endl;

    cout << "Roll No : " << s1.rollName << endl;

    //creat an array of Structures 

    student s[5];

    // now we can use same as array but now it is am array of structs

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the Name of the " << i + 1 << " Student: ";
        
        getline(cin, s[i].name);

        cout << "Enter the Roll No: ";

        cin >> s[i].rollName;

        cout << endl;
    }

    for (int i =0; i<5; i++){
        cout << i + 1 << "-> Student Name: "<< s[i].name << endl;
        cout<< "Roll No: " << s[i].rollName << end;

    }

}

int main()
{

    test_array();
    test_struct();

    return 0;
}