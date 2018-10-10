// The main test file for the Operating Systems C-Linked List for storing strings

#include <stdio.h>
#include <stdlib.h>
#include "list.h"


int main() {

    printf("\n**********************************************************\n");
    printf("Operating Systems Project 1 - C-Linked List\n");
    printf("Fleurevca Francois\n");
    printf("**********************************************************\n\n");


    printf("Testing the creation and the addition of elements to the list.\n\n");
    list* test1;
    test1 = create_list();

    printf("**********************************************************\n");
    printf("List created. Adding the strings: Mike, Hi, Fleurevca, Ciao.\n\n");
    add_to_list(test1, "Mike");
    add_to_list(test1, "Hi");
    add_to_list(test1, "Fleurevca");
    add_to_list(test1, "Ciao");

    printf("**********************************************************\n");
    printf("Elements added to the list. Now Printing the list.\n\n");
    print_list(test1);
    printf("\n");

    return 0;

}
