#include <stdio.h>

int binarysearch(int findme,int inthisarray[],int n);

int main()
{
	int samplearray1[]={0,1,2,3,4,5,6,7,8,9};
	printf("Location of 3 in Array 1: %d\n", binarysearch(3,samplearray1,9));

	int samplearray2[]={2,4,6,7,9,29,45,46,49,50,51};
	printf("Location of 9 in Array 2: %d\n", binarysearch(9,samplearray2,10));

	int samplearray3[]={4,18,22,51,61,80,84,91,97};
	printf("Location of 91 in Array 3: %d\n", binarysearch(91,samplearray3,8));
	return 0;
}

int binarysearch(int findme,int inthisarray[],int n)
{
	int lower = 0;
    	int upper = n-1;
	int middle = ( lower + upper ) / 2;

	while(lower < upper && findme != inthisarray[middle])
{
		if( findme > inthisarray[middle])
		{	
		lower = middle+1;
		}
		else
		{	
		upper = middle -1;
		}
	middle = (lower + upper)/2;
}
	return middle;
}

