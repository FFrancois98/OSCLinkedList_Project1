#include "list.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>




/* Allocates and initializes a new list */
list* create_list( )
{
	list* ll = malloc(sizeof(list));				//allocated space for head
	ll->head = NULL;

	return ll;							//return list
}


/* Adds item to the end of the list. Allocates a
* new buffer and copies the string from item (use malloc,
* strlen, and strcpy; or try strdup).
* Returns 0 if successful, non-zero otherwise. */
int add_to_list(list* ll, char* item)
{
	node* current;						//node to hold head
	current = ll->head;
	
	node* temp = malloc(sizeof(node));						//allocate space
	temp->c_string = malloc(strlen(item));						//allocate space for c string
	strcpy(temp->c_string, item);						//copies item into the linked list 
	temp->next = NULL;
	
	if (ll->head != NULL)
	{
		while (current->next != NULL)
		{
			current = current->next;							//traverse through the list to get to the end
		}
		current->next = temp;
	}
	else
	{
		ll->head = temp;									//if ll->head is NUUL then assign tmep to it
	}

}


/* Removes the string from the front of the list and
* returns a pointer to it. The caller is expected to free
* the string returned when finished with it. */
char* remove_from_list(list* ll)
{
	node* temp;							//create a new temp pointer to point to the head
	node* hold;							//hold the node before it
	char* front;								//char pointer that will return the string

	temp = ll->head;
	
	ll->head = ll->head->next;							//make the head the next node in the list
	
	front = temp->c_string;					//if the head next points to NULL then you are at the end of the list
	free(temp);					//free temp 
	
	return front;					// return the string at the end
}


/* Prints every string in the list, with a new line
* character at the end of each string */
void print_list(list *ll)
{
	node* temp;				//make a temp pointer
	temp = ll->head;						//make it point to the head

	while(temp->next != NULL)				//while the next link isnt null
	{
		printf("%s\n", temp->c_string);				//print out the string
		temp = temp->next;
	}
	printf("%s\n", temp->c_string);				//this is here to print out the last string in the list
}


/* Flushes (clears) the entire list and re-initializes the
* list. The passed pointer ll should still point to a
* valid, empty list when this function returns. Any memory
* allocated to store items in the list should be freed. */
void flush_list(list* ll)
{
	if (ll->head == NULL)						//return if it is empty
	{
		return;
	}
	
	node* temp = ll->head;					//"create" list
	ll->head = NULL;

	node* hold;
	while(temp!= NULL)							//if the temp is null then the list is empty
	{
		hold = temp;
		temp = temp->next;
		free(hold->c_string);						//free the string and the node
		free(hold);
	}
	return;
}


/* De-allocates all data for the list. Ensure all memory
* allocated for this list is freed, including any
* allocated strings and the list itself. */
void free_list(list *ll)
{
	node* temp = ll->head;							//points temp to head
	node* hold;
	 
	while(temp!= NULL)							//if the temp is null then the list is empty
	{
		hold = temp;
		temp = temp->next;
		free(hold->c_string);						//free the string and the node
		free(hold);
	}
	free(ll);
}