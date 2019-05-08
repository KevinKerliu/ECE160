#include <stdio.h>

int rightrot(int x, int y);
void main(){

	printf("%d\n", rightrot(12, 2));
	printf("%d", rightrot(5, 1));
}
int rightrot(int x, int n){
x = x >> n;
return x;
}

