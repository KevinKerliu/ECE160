#include <stdio.h>

int main()
{
	int x = 10;
	int y = x;
	if (x < 4)
{
	y = x << 2;
}
	else if (x >= 8)
{
	y = x >> 2;
}
	printf("For x = %d, Result = %d", x, y);
	return 0;
}
