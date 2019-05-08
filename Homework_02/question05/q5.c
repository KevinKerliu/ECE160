#include <stdio.h>

int main()
{
	printf("Insert a letter.\n");
	char upperCase = getchar();
	int z = upperCase + 32;
	( upperCase <= 90 && upperCase >= 65 ) ? printf("%c", z) : putchar(upperCase);
	return 0;
}
