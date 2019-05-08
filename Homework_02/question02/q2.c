#include <stdio.h>
#include <math.h>

int setbits(int x, int p, int n, int y);

int main()
{
	setbits(17, 2, 2, 8);
	return 0;
}


int setbits (int x, int p, int n, int y)
{
	// Get last n bits of y
	int step1 = pow(2, n) - 1;

	// bit & with y
	int step2 = step1 & y;

	// Left shit by p
	int step3 = step2 << p;

	// Zero out the bits in x that will change
	int step4 = ~((~(~0<<n))<<p);

	// X AND step4
	int step5 = x & step4;

	// OR step4 | step3
	int result = step3 | x;
	printf("Result: %d", result);
	return result;
}	      
