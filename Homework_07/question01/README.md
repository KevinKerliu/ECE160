## Question 1

(K&R Exercise 6-2) Write a program that reads a C program and prints in alphabetical order each group of variable names that are identical in the first 6 characters, but different somewhere thereafter. Don't count words within strings and comments. Make 6 a parameter that can be set from the command line. Also, list out the commands to run the program below.

Compile Steps: 

    gcc q1.c

Command(s) to run the program:

    Example 1: ./a.exe < q1.c 
    Example 2: ./a.exe < q1.c 2

Output:

    Example 1:

    3 MAX
    1 NULL
    1 addroot
    1 addtree
    1 addword
    1 argc
    1 argv
    1 buf
    1 bufp
    9 char
    1 const
    2 count
    1 firstword
    11 int
    1 left
    1 len
    1 listroot
    1 main
    2 mgetword
    1 mstrdup
    1 nextroot
    1 nextword
    1 parse
    1 printlist
    1 printwords
    1 right
    2 root
    7 simroot
    7 simword
    26 struct
    1 talloc
    12 tnode
    1 treeprint
    5 void
    1 walloc
    1 while
    4 word

    Duplicate list:


    Example 2:

    3 MAX
    1 NULL
    1 addroot
    1 addtree
    1 addword
    1 argc
    1 argv
    1 buf
    1 bufp
    9 char
    1 const
    2 count
    1 firstword
    11 int
    1 left
    1 len
    1 listroot
    1 main
    2 mgetword
    1 mstrdup
    1 nextroot
    1 nextword
    1 parse
    1 printlist
    1 printwords
    1 right
    2 root
    7 simroot
    7 simword
    26 struct
    1 talloc
    12 tnode
    1 treeprint
    5 void
    1 walloc
    1 while
    4 word
    
    Duplicate list:

    ad
        1 addroot
        1 addtree
        1 addword
    ar
        1 argc
        1 argv
    bu
        1 buf
        1 bufp
    co
        1 const
        2 count
    le
        1 left
        1 len
    ne
        1 nextroot
        1 nextword
    pr
        1 printlist
        1 printwords
    si
        7 simroot
        7 simword
