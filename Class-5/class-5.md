# List with Pointers #

<code>
    struct Student{
        int roll_No;
        string name;
    };

    int main(){
        Student s1;

        s1.name = "Usman";

        // Now we will try with pointer 

        Student *s;

        s = &s1; // one way of getting the result

        cout<< (*s).name ; // show output Usman 

        // why we use brackets as the . have higher priority that's why we write this (*s).name

        // there is another way 

        cout << s->name ; // same output and also same as the (*s).name

    }
</code>

## new instance, Dynamic Memory Location, Runtime Memory Allocation ##

*By using new key word we will allocate the memory but only know rhe address not the name of the variable*

<code>
                          
                                                                     *return the address*
// **structur name**    **This is the pointer to hold the address**   **KeyWord**    **Type of object**
        Student               *ptr_student                               = new           Student;

// now we can store the value and retrieve the value by using the pointer 

ptr_student->name = "Ali";

cout << "Name: " << ptr_student->name << endl;

</code>


## Delete, Release the Allocated memory, Tell to OS now this memory is free ##

1. Opposit of new
2. delete only delete the variables that created with new


<code>

    delete ptr_student;

    // now the allocated memory is free

</code>


# List, Single Link List Data Structure #

1. Hetrogenity
2. variale length

*If we want to store data and not sure about the length then arrays will not work.*

### Understand how the links are build ###

<code>

    struct Student{

        int roll_No;
        Studdent *next;
    };


        Student *head, *current;

        head = NULL; // last node always be NULL

        head = new Student; // creat a object of student struct dynamically

        //set the data 

        head->roll_No = 4487;

        head->next = NULL;

        head->next = new Student; // Another object of struct Students;

        head->next->roll_No = 4488;

        head->next->next = NULL;

        current = new Student; // now the link is break 

        head->next = current;

        current->roll_No = 4481;

        current->next = NULL
</code>


## Implementation of Single Link List##

<code>
    struct Student{

        string name;
        Studdent *next;
    };

    Student* creatNode(Student* current,string name){

        Student *node;
        node = new Student;

        node->name = name;
        
        node->next = NULL;

        current->next = node; // Link with the next node

        return node;

    }
    int main(){

        Student *head, *current;

        head->name = "Ali";

        head->next = NULL;

        current = head; //both pointers point to a same node now we will move the current node 

        current = creatNode(current,"Usman"); //calling function and the next node address return the 
        
        address now the link is build.

        current = creatNode(current,"Ahmed"); // now the the next node addes

        // with the loop you can add multiple nods now 


        // delete a node from the list 

        Student *temp = current;

        current = head;

        delete temp;
        
        // now only one node is remaining ;

    }
</code>

