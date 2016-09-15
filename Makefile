# Set some standard variables , CC is the compiler . CFLAGS set compiler options
CC=gcc
CFLAGS =-g -Wall

# The first target is the default , traditionally , all means build everything
all : main list # These are my two targets
main : main .o util .o # The " main " application requires those two o files
 $(CC) main .o util .o -o main
main .o: main .c # The main object is from this c file
$(CC) $( CFLAGS ) -c main .c
14 util .o: util .c util .h #The util object depends on these files
$(CC) $( CFLAGS ) -c util .c
#We 're going to add some targets below that we 'll use in the next section
list : list .o ll.o
$(CC) list .o ll.o -o list
list .o: list .c
$(CC) $( CFLAGS ) -c list .c
 ll.o: ll.c ll.h
$(CC) $( CFLAGS ) -c ll.c
# And now some helper targets
clean : # Remove all the target files , just leaving code (Be careful !)
 rm -f *.o list main
