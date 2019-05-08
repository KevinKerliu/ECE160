#include <stdio.h>
#include <math.h>

int main(){

int x = 14;
int p = 1;
int n = 2;

//step1 get 1s in the last n position
int step1 = pow(2, n)-1;

//step2
int step2 = step1 << p;

//step3
int result = step2 ^ x;

printf("For x = %d, p = %d, n = %d, result = %d", x, p, n, result);

return 0;
}
