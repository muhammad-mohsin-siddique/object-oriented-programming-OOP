# File Handling - Characters and Binary #

File handling is used to store data permanently in a computer. 

Using file handling we can store our data in secondary memory (Hard disk).

How to achieve the File Handling

For achieving file handling we need to follow the following steps:-

1. STEP 1-Naming a file
2. STEP 2-Opening a file
3. STEP 3-Writing data into the file
4. STEP 4-Reading data from the file
5. STEP 5-Closing a file.

<code>
    //whenever we cout 

    cout << "Hello World" << endl;

    // first this string goes to Buffer one by one in buffer and then from the buffer the output shown on the terminal or console.

    // in the buffer the string store like this ....  
     
    |d|l|r|o|w| |o|l|l|e|H| 

    // Like this, the characters will now display on the terminal, although we have seen in the buffer it is in reverse order.

    ifstream // used to input data 
    ofstream // used to output in the file  

    fstream // for both input & output

    ofstream fout;

    fout.open("sample.txt") // here we can use absolute/relatie path // it is in writing mode be care full it over write the content.

    fout << "Hello World";

    fout.close(); //don't forgot to close the file

    ifstream  fin;

    fin.open("sample.txt");
    
    string line;

    if(fin) // check file opened or not
    {
        cout<< "File Successufully Opened " <<  endl;

        getline(fin, line);
    }

    // for all the data in the file you can use Loops

    while(fin) // if file open successfully it will return true also if the end-of-file (EOF) reached return false
    {
        getline(fine, line)
    }

    // all the data according to the above code saved as characters means if we save integer 1 it is save as a character '1'.

    //now we will save data in the file as integer and read the data as we have entered first.

    int temp = 45;

    ofstream fout("data.bin", ios::binary) // write data in the file in binary mode 

    fout.write((char*) &temp ,sizeof(int)); // two parameters 1st is the pointer od the vlaue ion character and 2nd one is the size of the data type you want to store 

    
    
</code>