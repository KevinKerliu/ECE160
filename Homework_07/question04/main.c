#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <word.h>
#include <tree.h>

#define MAXWORD 100

// word frequency count
int main(){
    Treeptr root;
    char word[MAXWORD];
    root = NULL;
    while (getword(word, MAXWORD) != EOF){
            if (isalpha(word[0]))
                    root = addtree(root, word);
    }
    treeprint(root);
    return 0;
}

