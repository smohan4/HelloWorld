# include <stdlib .h> // for malloc / free
# include <stdio .h> // for printf
# include "ll.h"

// Add a node to the front of a list
struct node * AddToHead ( struct node * head , int value )
{
// Create a new node out of raw memory
struct node * new = malloc ( sizeof ( struct node ));
// Should do an error check here , but let 's live dangerously for simplicity
new -> value = value ;
new -> next = 0; // Null pointer means nothing after this node
if( head ) // non - empty list
 new -> next = head ; // Insert node in front of head
return new ; // Return my new node as the new head of the list
}
// Print out a list in order
 void PrintList ( struct node * head )
{
// Walk through list.printing out values
while(head)
{
 printf ("%d->",head -> value ); // Print current node
head = head -> next ; // Move to next node
}
printf ("\n");
}

// Delete my list
void KillList ( struct node * head )
{
struct node * next = 0;
// Walk through my list , releasing memory
while ( head ) // Any nodes left ?
{
next = head -> next ; // Grab a handle to second node
free ( head ); // Let go of first node
 head = next ; // Make second node the first one
}
}
