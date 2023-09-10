#include<iostream>
using namespace std;

int main ()
{

    int age = 18;

    if(age >= 18) // conditon
    {
        // if condition true then the body will execute
        cout<<"You can Vote"<<endl;
    }
    else
        //Single line we can write without braces but multiple line must be within a braces
        cout<<"You can not Vote"<<endl;

    // calculate the points of the grades

    char grade = 'A';

    float point;

    if(grade == 'A')
        point = 4.0;
    else if(grade == 'B')
        point = 3.0;
    else if(grade == 'C')
        point = 2.0
    else if (grade == 'D')
        point = 1.0;
    else 
        point 0.0;


    cout<< point<<endl;

    // switch 


    switch (grade)  // Non Recomended
    {
    case 'A':
        point = 4.0;
        break;
    case 'B':
        point = 3.0;
        break;
    case 'C':
        point = 2.0;
        break;
    case 'D':
        point = 1.0;
        break;
    default:
        point = 0.0;
        break;
    }

    cout<< point<<endl;

    // Conditional Operator:

    /*
    syntax :    (condition) ? [true_statements] : [flase_statements];
    
    */
    
    int flag = 0;
    int var;

    var = flag == 0 ? 25 : -25 

    cout<<"variable value is  = " << var <<endl;

    var = flag != 0 ? 25 : -25

    cout<<"variable value is  = " << var <<endl;

    
    return 0;
}