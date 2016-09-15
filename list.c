# include <stdio .h>
# include "ll.h" // Simple demo linked list code
 int main ()
{
// We 're just going to create a simple list , then print it out .
// This is mostly just so we have something interesting to do with
// the debuggers .
 struct node * head = 0;
for ( int i=0 ; i < 10 ; ++i )
{
printf (" Adding %d to list \n", i);
 head = AddToHead (head ,i);
}
printf (" LIST CONTENTS : ");
PrintList ( head );
KillList ( head );
printf ("\n");
return 0;
}
