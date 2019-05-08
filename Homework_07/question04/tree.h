#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef struct tnode *Treeptr;
Treeptr addtree(Treeptr, char *);
void treeprint(Treeptr);
Treeptr talloc(void);

