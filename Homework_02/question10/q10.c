#include <stdio.h>

int main()
{
	printf("How hard is Cooper?\n A)Medium\n B)Ivy League level\n C)Easy game easy life\n D)Dumb hard\n");
	char answer = getchar();
	if( answer == 'C' || answer == 'c' ) 
{
		printf(" Correct! :D ");
}
	else
{
		printf(" Wrong :'( ");
}	
	return 0;
}
