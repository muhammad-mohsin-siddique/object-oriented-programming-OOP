#include<iostream>
using namespace std;

struct student
{
    string name;
    int rollName;
};

int main() {

    student s1;

    s1.name = "Ali";
    s1.rollName = 4487;


    cout << "Name : " << s1.name << endl;

    cout << "Roll No : " << s1.rollName << endl;

    return 0;

}