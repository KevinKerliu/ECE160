#include <stdio.h>
#include <string.h>
#include <math.h>

double htoi(char s[]);

void main(){
char str1[] = "1234Ab";
char str2[] = "57Fb70";
char str3[] = "48cd9";
printf(str1);
printf(" in decimal is %f\n", htoi(str1));
printf(str2);
printf(" in decimal is %f\n", htoi(str2));
printf(str3);
printf(" in decimal is %f\n", htoi(str3));
return;
}

double htoi(char s[]){
	double dec = 0;
	int numElems = strlen(s);
	double j = numElems - 1;
	for (int i = 0; i < numElems; i++){
		if (s[i] >= 48 && s[i] <= 57){
			dec += ((s[i]-'0')*pow(16, j));
		}
		else if (s[i] >= 65 && s[i] <= 70){
			dec += ((s[i]-55)*pow(16, j));
		}
		else if (s[i] >= 97 && s[i] <= 102){
			dec += ((s[i]-87)*pow(16, j));
		}

	j--;
	}
	return dec;
}
