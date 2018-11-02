Project 1 Version 4
In this project, I created a C-string linked list data structure for storing character strings using a header file (list.h) and a separate source file (list.c) for all functions. I needed to implement predefined functions, as well as define the structs necessary. I was not allowed to use arrays and not allowed to use functions from the C++ Standard Template Library.
Authors
Cynthia Jules
Getting Started
Prerequisites
You will need the following installed on your computer:
1. Notepad ++
2. Bash on Ubuntu on Windows (or any Unix based command line) with gcc compiler
Requirements
Put any struct definitions, typedefs and the above function prototypes in a header file “list.h” and function bodies (implementations) in a source file “list.c”. The source code must use UNIX style EOL characters \n not DOS style \n\r. Write code on Windows but convert it to Unix text files before submitting. The dos2unix command may be useful for this.
The function declarations that should be in the "list.h" file are as follows:
list* create_list( );
int add_to_list(list* ll, char* item);
char* remove_from_list(list* ll);
void print_list(list *ll);
void flush_list(list* ll);
void free_list(list *ll);
Make a test file “list_test.c” that tests the list implementation. The test file should try various combinations of the create_list, add_to_list, remove_from_list, flush_list, print_list, and free_list functions. Check return values on any function that can possibly fail.
 Write a Makefile that compiles list.c and list_test.c to create a binary executable. The program should compile without any warnings or errors when using all standard GCC warnings in -Wall.
How to Run the Program
1. Go to directory that the program is in.
2. Run MAKEFILE in the command line.
1. The output should be in the file called "output".
Challenges
While writing this program I had many challenges. To begin, I did not know who to write in C, as I only know C++. Also, I didn't know how to create a proper struct in C, so after many errors. I had help from another student to create the free and flush list functions. I was not able to end a loop because I didn't check for the condition that if the list is empty, to do nothing. Also, I kept getting a segmentation error when I freed the list in the least test and this is fine because it prints the list even after it is freed giving me this error.