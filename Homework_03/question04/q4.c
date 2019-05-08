#include <stdio.h>
#include <string.h>
#include <math.h>

void itob(int n, char s[], int b);

void main(){

char str1[] = "";
int num1 = 3205;
int base1 = 16;

printf("%i in base %i is ", num1, base1);
itob(num1, str1, base1);
printf(str1);
printf("\n");

char str2[] = "";
int num2 = 3058;
int base2 = 8;

printf("%i in base %i is ", num2, base2);
itob(num2, str2, base2);
printf(str2);
printf("\n");

char str3[] = "";
int num3 = 15;
int base3 = 2;

printf("%i in base %i is ", num3, base3);
itob(num3, str3, base3);
printf(str3);

return;
}

void itob(int n, char s[], int b){
        int newN = n;
	float div;
	float remainder;

	for(int i=0; n>0; i++){
		newN = n/b;
		//printf("%i\n",newN);
		div = ((float)n)/b;
		//printf("div: %f\n", div);
		remainder = div-((float)newN);
		//printf("remainder: %f\n", remainder);
		if((remainder*b)>9){
		s[i] = ((char)((remainder*b)+55));
		}
		else{
		s[i] = (remainder*b)+'0';
		}

		//printf("s[i]:\n", (s));
		n = newN;
	}
		int c, i, j;
    		for (i=0, j=strlen(s)-1; i<j; i++, j--){
        	c = s[i];
        	s[i] = s[j];
        	s[j] = c;
    		}

	}


