//A simple library for a very rudimentary linked list of integers
# ifndef LLH
# define LLH
 // Linked list node
struct node
{
int value ;
struct node * next ;
}; // THis semicolon is important
// Add a node to the front of a list
struct node * AddToHead ( struct node *, int );
 // Print out a list in order
void PrintList ( struct node *);
// Release the memory a list is taking
void KillList ( struct node *);

# endif
