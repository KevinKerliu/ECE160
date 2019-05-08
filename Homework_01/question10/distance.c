#include <stdio.h>
#include <math.h>

void main(){
int x1 = -3;
int x2 = 8;
int y1 = 6;
int y2 = -4;
float distance = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
printf("%f", distance);
return;
}

