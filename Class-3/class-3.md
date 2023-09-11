# Arrays, Strings and Structs #

**Arrays**

1. Homogenous (Same Type)
2. Contigous  
3. Fix Size


**Array of three integers:**

<code>int array[3]</code> // In the braces, you have to enter a constant; otherwise, the compiler will report an error.

1st element:

<code>array[0]</code>

2nd element:

<code>array[2]</code>

**String Array:**


Arrays are used to store multiple values in a single variable, instead of declaring separate variables for eachvalue.

To declare an array, define the variable type, specify the nameof the array followed by square bracketsand specify the number of elements it should store:

**Show out put with loop:**

<code>
    for (int i = 0; i < 3; i++ )
    {
        cout<< array[i]<< endl;
    }
</code>

## 2D Array ##

**Syntax: **

<code>
    int array[2][3]; // 2D array with 2 rows and 3 columns
    for (int i = 0; i < 3; i++ ){
        for (int j = 0; j < 3; j++ ){
            array[i][j] = i * j;
        }
    }
    
    for (int i = 0; i < 3; i++ ){
        for (int j = 0; j < 3; j++ ){
            cout<< array[i][j] << endl;
        }
    }
</code>


## Character Arrays ##

**Character array  == string**

*But a string have null terminator at the end*
 


<code>

    string name = "Mohsin";

    name.length(); // length of the element of the array which is 6 but values 5 due to null terminator

    name.empty(); //Check the string is empty or not return boolean value; 

</code>//you can add #include "string" // now it also a character array name[] = "Mohsin" but at the end the string has '/0' null terminator.

<code>

    char array[] = "Hello"; // "Hello is the String"

    cout<< array[0] << endl; // 'H'

    for (int i = 0; i < 6; i++ )
    {
        cout<< array[i]<< endl;
    }
    

</code>


# Structs #

Structures (also called structs) are a way to group several related variables into one place. Each variable in the structure isknown as a member of the structure. 

To store Hetrogenous Data:

*Syntax:*

<code>
    struct student{
        string name;
        int roll_number;
    };
</code>




