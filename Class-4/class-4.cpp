#include<iostream>
using namespace std;


void  pointer_test(){

    int x = 25;

    cout << "Value of x itself              : " << x << endl;
    cout << "Value of Address of x              : " << &x << endl;



    int *ptr; 

    ptr = &x;

    cout << "Value of x itself              : " << ptr << endl;
    cout << "Value of Address of x              : " << *ptr << endl; // *ptr is called pointer deferencing 



}

void pointer_array_test(){

        int a[] = {1, 2, 3, 4};

    int *p = NULL;

    // p = &a[0];  // we can also use as it, array also a constant pointer

    p = a; // same as the above line, Starting address of the array is equall to the address of thr array


    cout << "Value of array[0] itself              : " << a[0] << endl;
    cout << "Value of Address of array              : " << &a[0] << endl;

    cout << "Value of Address of array              : " << a << endl;

    cout << "Value of Address of array with pointer             : " << p << endl;


    for (int i = 0; i < 4; i++)
    {
        cout<< *p << endl;
        p++;
    }

}

void null_pointer_test {

    int x = 25;

    int *p, *q;

    q = NULL;

    p = &x;

    cout<< "Value of P = "  <<  p  << endl;
    cout<< "Value of *P = " << *p  << endl;
    cout<< "Value of q = "  <<  q  << endl;
    cout<< "Value of *q = " << *q  << endl; // check for NULL befor using 

    // NULL pointer deferencing error/crash

}



int main() {

    pointer_test();
    pointer_array_test();

    return 0;

}