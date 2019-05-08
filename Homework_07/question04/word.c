#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <word.h>
#include <global.h>


char *mystrdup(char *s) // make a duplicate of s
{
    char *p;
    p = (char *) malloc(strlen(s)+1); // +1 for '\0'
    if (p != NULL)
        strcpy(p, s);
    return p;
}


int getword(char *word, int lim)
{
    int c, getch(void);
    void ungetch(int);
    char *w = word;

    while (isspace(c = getch()))
        ;

    if (c != EOF)
        *w++ = c;
    if (!isalpha(c)) {
        *w = '\0';
        return c;
    }

    for ( ; --lim > 0; w++)
        if (!isalnum(*w = getch())) {
            ungetch(*w);
            break;
        }

    *w = '\0';

    return word[0];
}




int getch(void) // get a (possibly pushed back) character
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c) // push character back on input
{
    if (bufp >= BUFSIZE)
        printf("ungetch: too many caracters\n");
    else
  buf[bufp++] = c;
}

