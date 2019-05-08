#include <stdio.h>

void main()
{
	int tempOneFahr = 40;
	int tempTwoFahr = 30;
	printf("40 degrees Fahrenheit is ");
	if (tempOneFahr > 32)
{	
		printf("Above Freezing.\n");
}
	else 
{	
		printf("Below Freezing.\n");
}
	printf("30 degrees Fahrenheit is ");
	if (tempTwoFahr > 32)
{
		printf("Above Freezing.");
}
	else
{
		printf("Below Freezing.");	
}
	return;
}
