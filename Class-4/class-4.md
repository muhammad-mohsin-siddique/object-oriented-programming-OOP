# Pointers #

*A pointer however, is a variable that stores the memory address as its value.*

Pointers are symbolic representations of addresses. They enable programs to simulate call-by-reference as well as to create and manipulate dynamic data structures.


<code>

    int x; // simple variable

    x = 25; // initialize variable

    cout << x; // value of the x will display 

    cout << &x << endl; // It will show the address of the variable using address operater

    // Now we will use pointer

    int *ptr = &x; // p is a integer(the things it points to has to be an integer) pointer (Hold an Address) 

    cout<< p << endl; // show the address of the variable x

    cout<< *p << endl; // show the value of the x


</code>

// In Code File Pointer's Implementation...