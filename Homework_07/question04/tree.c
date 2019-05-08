#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <tree.h>
#include <word.h>

struct tnode {           // the tree node:
    char *word;          // points to the text
    int count;           // number of occurrences
    Treeptr left;  // left child
    Treeptr right; // right child
}Treenode;

// addtree: add a node with w, at or below p
Treeptr addtree(Treeptr p, char *w)
{
    int cond;

    if (p == NULL) {    // a new word has arrived
        p = talloc();   // make a new node
        p->word = mystrdup(w);
        p->count = 1;
        p->left = p->right = NULL;
    } else if ((cond = strcmp(w, p->word)) == 0)
        p->count++;     // repeated word
    else if (cond < 0)  // less than into left subtree
        p->left = addtree(p->left, w);
    else                // greater than into right subtree
        p->right = addtree(p->right, w);
    return p;
}

// treeprint: in-order print of tree p
void treeprint(Treeptr p)
{
    if (p != NULL) {
        treeprint(p->left);
        printf("%4d %s\n", p->count, p->word);
        treeprint(p->right);
    }
}

// talloc: make a tnode
Treeptr talloc(void)
{
    return (Treeptr) malloc(sizeof(Treenode));
}

