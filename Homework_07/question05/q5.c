#include<stdio.h>
#include<string.h>
#define MAX 1000
#define I 1
#define V 5
#define X 10
#define L 50
#define C 100
#define D 500
#define M 1000

int convert(char);

int main(){
    char roman[MAX];
    int i = 0;
    long int n = 0;
    printf("Enter a Roman Numeral: ");
    scanf("%s",roman);
    while(roman[i])
    {
         if(convert(roman[i]) < 0)
         {
             printf("Invalid Roman Numeral : %c",roman[i]);
             return 0;
         }
         if((strlen(roman)-i) > 2)
         {
             if(convert(roman[i]) < convert(roman[i+2]))
             {
                 printf("Invalid Roman Numeral");
                 return 0;
             }
         }
         if(convert(roman[i]) >= convert(roman[i+1]))
             n = n + convert(roman[i]);
         else
         {
             n = n + (convert(roman[i+1]) - convert(roman[i]));
             i++;
         }
         i++;
    }
    printf("Decimal Value: %d", n);
    return 0;
}

int convert(char c)
{
    int converted = 0;
    switch(c)
    {
        case 'I': converted = I; 
                  break;
        case 'V': converted = V; 
                  break;
        case 'X': converted = X; 
                  break;
        case 'L': converted = L; 
                  break;
        case 'C': converted = C; 
                  break;
        case 'D': converted = D; 
                  break;
        case 'M': converted = M; 
                  break;
        case '\0': converted = 0; 
                   break;
        default: converted = -1;
    }
    return converted;
}
