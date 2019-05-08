#include <stdio.h>
#include <string.h>


int itoa (int num, char array[], int w);
void reverse (char string[]);

int main()
{
	char string[] = " ";
	itoa(-1019,string,6);
	printf("Result 1: %s\n", string);
	itoa(-1019,string,15);
	printf("Result 2: %s\n", string);
	itoa(-1019,string,20);
	printf("Result 3: %s\n", string);
	return 0;
}


int itoa (int number, char string[], int width)
{
	int i = 0;
	int sign = number;
	
	if(sign < 0)
	{
		number=-number;
	}

	do
	{
		string[i++] = (number % 10) + '0';
	}
	while((number/=10)>0);
	
	if (sign < 0)
	{
		string[i++] = '-';
	}
	
	while(i<width)
	{
		string[i++] = ' ';
	}

	string[i] = '\0';
	reverse(string);
}


void reverse (char string[])
{
	int i;
        long j;
        for (i=0, j=strlen(string)-1; i<j; i++, j--)
	{
                char store = string[i];
                string[i] = string [j];
                string[j] = store;
	}

}
