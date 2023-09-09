#include <iostream>
using namespace std;

int function_test(int); // function prototype

void variables_test(){
    int x; // local scope variable

    x = 21474836347;
    cout<< "Value = " << x << endl;

    // x = 21474836348; // can't do this!
    // cout<< "int = " << x << endl;

    long y;

    y = 21474836348;
    cout<< "long = " << y << endl;

    y = 9223372036854775807;
    cout<< "Long Upper Limit = " << y << endl;

    float f;
    f = 3.40282e+38;
    cout<< "Float = " << f << endl;

    f = 3.40282e+39;
    cout<< "Float = " << f << endl; 

    double g;

    g = 3.40282e+39;
    cout<< "Double = " << g << endl; 

}

void char_test(){
    char x = 'A';

    cout<<"Value of Variable: "<< x << endl;
    cout<<"Converted to int: "<< int(x) << endl;
    cout<<"Adding 1: "<< (char)(x + 1) << endl;


    // unicode -- modern ASCII
}
void cin_test{

    int val;

    cout<<"Enter a Value: ";
    cin>>val;
    cout<<"Entered value = "<< val <<endl;
}

int main ()
{
    cout<<"Hello World"<<endl;

    cout<<function_test(5)<<endl;

    cin_test();

    variables_test();

    char_test();

    return 0;
}
int function_test(int x)
{
    cout<<"\nFunction Recieved Value: "<< x << endl;
    return 2 * x;
}