/* test_list.c */

#include "list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
	//Create the strings 
	char* str1 = "Test string 1";
	char* str2 = "Test string 2";
	char* str3 = "Test string 3";
	char* str4 = "Test string 4";
	char* str5 = "Test string 5";
	char* str6 = "Test string 6";
	char* str7 = "Test string 7";
	char* str8 = "Test string 8";
	char* str9 = "Test string 9";
	char* str10 = "Test string 10";
	char* str11 = "Test string 11";
	
	/*Test 1*/
	printf("Test 1 // Test the creation of the lists\n");
	printf("\n");
	printf("Create Test List 1\n");
	list* test_list1 = create_list();
	
	printf("Create Test List 2\n");
	list* test_list2 = create_list();
	
	printf("Create Test List 3\n");
	list* test_list3 = create_list();
	
	printf("Create Test List 4\n");
	list* test_list4 = create_list();
	
	printf("\n");
	printf("\n");
	printf("\n");
	
	/*Test 2*/
	printf("Test 2 // Add to list using Test List 1\n");
	printf("\n");
	
	printf("add string 1\n");
	add_to_list(test_list1, str1);
	
	printf("add string 2\n");
	add_to_list(test_list1, str2);
	
	printf("add string 3\n");
	add_to_list(test_list1, str3);
	
	printf("add string 4\n");
	add_to_list(test_list1, str4);
	
	printf("\nExpect:\nTest string 1\nTest string 2\nTest string 3\nTest string 4");
	
	printf("\n");
	printf("\n");
	printf("\n");
	
	
	
	/*Test 3*/
	printf("Test 3 // Print the list for Test List 1\n");
	printf("\n");
	print_list(test_list1);
	
	printf("\n");
	printf("\n");
	printf("\n");
	
	
	
	/*Test 4*/
	printf("Test 4 // add to list using Test List 2\n");
	printf("\n");
	
	printf("add string 5\n");
	add_to_list(test_list2, str5);
	
	printf("add string 10\n");
	add_to_list(test_list2, str10);
	
	printf("add string 8\n");
	add_to_list(test_list2, str8);
	
	printf("add string 11\n");
	add_to_list(test_list2, str11);
	
	printf("add string 6\n");
	add_to_list(test_list2, str6);
	
	printf("\nExpect:\nTest string 5\nTest string 10\nTest string 8\nTest string 11\nTest string 6");
	
	printf("\n");
	printf("\n");
	printf("\n");
	
	
	
	/*Test 5*/
	printf("Test 5 // Print the list for Test List 2\n");
	printf("\n");
	print_list(test_list2);
	
	printf("\n");
	printf("\n");
	printf("\n");
	
	
	
	/*Test 6*/
	printf("Test 6 // removed from Test List 2");
	printf("\n");
	remove_from_list(test_list2);
	
	printf("\n");
	printf("\n");
	printf("\n");
	
	
	/*Test 7*/
	printf("Test 7 // print Test List 2\n");
	printf("\n");
	print_list(test_list2);
	
	printf("\n");
	printf("\n");
	printf("\n");
	
	
	
	/*Test 8*/
	printf("Test 8 // add to list using Test List 3\n");
	printf("\n");
	printf("add string 1\n");
	add_to_list(test_list3, str1);
	
	printf("add string 2\n");
	add_to_list(test_list3, str2);
	
	printf("add string 3\n");
	add_to_list(test_list3, str3);
	
	printf("add string 4\n");
	add_to_list(test_list3, str4);
	
	printf("add string 5\n");
	add_to_list(test_list3, str5);
	
	printf("add string 6\n");
	add_to_list(test_list3, str6);
	
	printf("add string 7\n");
	add_to_list(test_list3, str7);
	
	printf("add string 8\n");
	add_to_list(test_list3, str8);
	
	printf("\n Expect:\nTest string 1\nTest string 2\nTest string 3\nTest string 4\nTest string 5\nTest string 6\nTest string 7\nTest string 8");
	
	printf("\n");
	printf("\n");
	printf("\n");
	
	
	
	/*Test 9*/
	printf("Test 9 // Print Test List 3\n");
	printf("\n");
	print_list(test_list3);
	
	printf("\n");
	printf("\n");
	printf("\n");
	
	
	
	/*Test 10*/
	printf("Test 10 // Flush Test List 3\n");
	printf("\n");
	flush_list(test_list3);
	
	printf("\n");
	printf("\n");
	printf("\n");
	
	
	
	/*Test 11*/
	printf("Test 11 // add to test List 3\n");
	printf("\n");
	
	
	printf("add string 7\n");
	add_to_list(test_list3, str7);
	
	printf("add string 9\n");
	add_to_list(test_list3, str9);

	
	printf("add string 11\n");
	add_to_list(test_list3, str11);
	
	printf("\nExpect:\nTest string 7 \nTest string 9\nTest string 11");
	
	printf("\n");
	printf("\n");
	printf("\n");
	
	
	
	/*Test 12*/
	printf("Test 12 / Print Test List 3\n");
	printf("\n");
	print_list(test_list3);
	
	printf("\n");
	printf("\n");
	printf("\n");
	
	
	
	/*Test 13*/
	printf("Test 13 // add to Test List 4\n");
	printf("\n");
	
	printf("add string 4\n");
	add_to_list(test_list4, str4);
	
	printf("add string 10\n");
	add_to_list(test_list4, str10);
	
	printf("\nExpect:\nTest string 4 \nTest string 10");
	
	printf("\n");
	printf("\n");
	printf("\n");
	

	
	
	/*Test 14*/
	printf("Test 14 / Print Test List 4\n");
	printf("\n");
	print_list(test_list4);
	
	printf("\n");
	printf("\n");
	printf("\n");
	
	
	
	/*Test 15*/
	printf("Test 15 // Free Test List 4\n");
	printf("Expect: \nSegmentation fault");
	
	
	free_list(test_list4);
	printf("\n");
	printf("\n");
	printf("\n");
	print_list(test_list4);
	
	printf("\n");
	printf("\n");
	printf("\n");
}
