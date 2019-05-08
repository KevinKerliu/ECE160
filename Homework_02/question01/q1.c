#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("signed char min: %d\n", CHAR_MIN);
    printf("signed char max: %d\n", CHAR_MAX);
    printf("signed short min: %d\n", SHRT_MIN);
    printf("signed short max: %d\n", SHRT_MAX);
    printf("signed int min: %d\n", INT_MIN);
    printf("signed int max: %d\n", INT_MAX);
    printf("signed long min: %d\n", LONG_MIN);
    printf("signed long max: %d\n", LONG_MAX);
   
    //unsigned data types have min of 0
    
    printf("\nunsigned char min: %d\n", 0);
    printf("unsigned char max: %d\n", UCHAR_MAX);
    printf("unsigned short min: %d\n", 0);
    printf("unsigned short max: %d\n", USHRT_MAX);
    printf("unsigned int min: %d\n", 0);
    printf("unsigned int max: %d\n", UINT_MAX);
    printf("unsigned long min: %d\n", 0);
    printf("unsigned long max: %d\n", ULONG_MAX);
    
    printf("\nfloat min: %E\n", FLT_MIN);
    printf("float max: %E\n", FLT_MAX);
    printf("double min: %E\n", DBL_MIN);
    printf("double max: %E\n", DBL_MAX);
    printf("long double min: %E\n", LDBL_MIN);
    printf("long double max: %E\n", LDBL_MAX);
    return 0;

}
