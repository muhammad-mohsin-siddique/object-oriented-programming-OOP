#include<iostream>
using namespace std;

struct Student
{
 int rollNo;
 float GPA;
 Student *next;
};

Student* creatNewNode(Student* current)
{

    Student *node;
    node = new Student;
    cout<< "\nEnter the Roll No (Integer Number): ";
    cin>>node->rollNo;
    cout<< "\nEnter the CGPA of the Student:      ";
    cin>>node->GPA;

    current->next = node;

    return node;

}

void deleteNode(Student *current)
{
    Student *temp = current->next;

    current->next = current->next->next;

    delete temp;
}

int main()
{

    Student *head, *current;
    head = new Student;
    
    head->GPA = 3.5;
    head->rollNo= 4487;
    head->next = NULL;

    current = head;

    // for further data if you want to enter 

    for (int i = 0; i < 3; i++)
    {
        current = creatNewNode(current);
    }
    
    current = head;

    // Show Output 

    while(current != NULL)
    {
        
        cout<< "\nRoll No:  " << current->rollNo;
        
        cout<< "\nCGPA:     " << current->GPA;

        current = current->next;

    }

    // delete a node 

    current = head;

    deleteNode(current);
    
    current = head;
    
    cout<<"\n\n deleteing the next node of the head"<<endl;

    while(current != NULL)
    {
        
        cout<< "\nRoll No:  " << current->rollNo;
        
        cout<< "\nCGPA:     " << current->GPA;

        current = current->next;

    }
    
    return 0;


}