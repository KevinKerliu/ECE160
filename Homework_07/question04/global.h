#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define BUFSIZE 100
#define MAXWORD 100

char buf[BUFSIZE]; // buffer for ungetch
int bufp = 0; // next free position in buf


