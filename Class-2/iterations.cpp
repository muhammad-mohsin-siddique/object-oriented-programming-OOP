#include<iostream>
using namespace std;

int main()
{
    int i = 0; // initialization

    while( i < 10) // condition // initialization
    { // body

        cout<< i <<endl;
        i++; //step
    }

    // at this time i = 10...

    for (i = 0; i < 10; i++ ) // initialization, condition, step // preferable 
    {
        if(i == 2){
            continue;
        }
        cout<< i <<endl;
    }

    for ( int j = 0; j < 10; j++ ) // j local variable
    {
        if(j == 2){
            break;
        }

        cout<< j <<endl;
        
    }

    i = 0;
    
    do{

        cout<<i<<endl;
        i++;

    }while(i < 10);


    return 0;
}