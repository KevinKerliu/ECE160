#include <stdio.h>
#include <string.h>

void squeeze2(char s1[], char s2[]);

void main(){
	char s1[] = "abcd";
	char s2[] = "aghj";
	
	printf("%s\n", s1);
	squeeze2(s1,s2);
	printf("%s\n", s1);

	char sc[] = "KevinR3b3cca";
	char sd[] = "Kevin";
	
	printf("%s\n", sc);
	squeeze2(sc, sd);
	printf("%s\n", sc);


	char se[] = "UtopiaIsCool";
	char sf[] = "Cool";

	printf("%s\n", se);
	squeeze2(se, sf);
	printf("%s\n", se);

	return;
}


void squeeze2(char s1[], char s2[]){
	char s3[strlen(s1)];
	int num = 0;
	int k = 0;
	for(int i = 0; i < strlen(s1); i++){
		for(int j = 0; j < strlen(s2);j++){
			if(s1[i] != s2[j]){
				num++;
			}

		}
				if(num == strlen(s2)){
				s3[k] = s1[i];
				k++;
				}
				num = 0;
			
			}
		
		for(int i = 0; i<strlen(s1);i++){
			s1[i] = s3[i];
		}


		return;
		}

