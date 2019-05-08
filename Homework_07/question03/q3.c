#include <stdio.h>
#include <stdlib.h>

#define HASHSIZE 101

struct nlist {
   int name; //num 
   int defn; //index
};

static struct nlist* hashArray[HASHSIZE]; 
static struct nlist* item;

int intersection(int output[], int array1[], int lenArr1, int array2[], int lenArr2);

int hashCode(int defn) {
   return defn % HASHSIZE;
}

struct nlist *lookup(int defn) {
   //get the hash 
   int hashIndex = hashCode(defn);  
	
   while(hashArray[hashIndex] != NULL) {
	
      if(hashArray[hashIndex]->defn == defn)
         return hashArray[hashIndex]; 
			
      //go to next cell
      ++hashIndex;
		
      hashIndex %= HASHSIZE;
   }        
	
   return NULL;        
}

void install(int name,int defn) {

   struct nlist *item = (struct nlist*) malloc(sizeof(struct nlist));
   item->name = name;  
   item->defn = defn;

   //get the hash 
   int hashIndex = hashCode(defn);

   while(hashArray[hashIndex] != NULL && hashArray[hashIndex]->defn != -1) {

     	   ++hashIndex;
		
      //wrap around the table
      hashIndex %= HASHSIZE;
   }
	
   hashArray[hashIndex] = item;
}



int intersection(int output[], int array1[], int lenArr1, int array2[], int lenArr2){
	
	int value;
	int n = 0;
	
	for (int i = 0; i < lenArr1; i++){
		value = array1[i];
		install(i, value);
	}
	
	for (int j = 0; j < lenArr2; j++){
		value = array2[j];
		item = lookup(value);
		if (item != NULL){
			  output[n] = item->defn;  			 
			  n++;
			  delete(item);

		}

	}
	
	return n;

}

struct nlist* delete(struct nlist* item) {
   int defn = item->defn;

   //get the hash
   int hashIndex = hashCode(defn);

   //move in array until an empty
   while(hashArray[hashIndex] != NULL) {

      if(hashArray[hashIndex]->defn == defn) {
         struct DataItem* temp = hashArray[hashIndex];

         //assign a dummy item at deleted position
         hashArray[hashIndex] = dummyItem;
         return temp;
      }

      //go to next cell
      ++hashIndex;

      //wrap around the table
       hashIndex %= HASHSIZE;
   }

   return NULL;
}


int main() {

	int arr1[] = {1,2,3,4,5,6};
	int arr2[] = {5,6,7,8,9,10};
	int size1 = sizeof(arr1)/sizeof(arr1[0]);
	int size2 = sizeof(arr2)/sizeof(arr2[0]);

	int output1[HASHSIZE];

	int n = intersection(output1, arr1, size1, arr2, size2);
	printf("Common Elements: \n");
	for (int i = 0; i < n; i++){
		printf("%i\n", output1[i]);
	
	}


	int arr3[] = {17, 52, 6, 3, 9, 15};
	int arr4[] = {8, 15, 7, 53, 52, 71, 89};

	int output2[HASHSIZE];

	int size3 = sizeof(arr3)/sizeof(arr3[0]);
        int size4 = sizeof(arr4)/sizeof(arr4[0]);


	n = intersection(output2, arr3, size3, arr4, size4);

        printf("Common Elements: \n");
        for (int i = 0; i < n; i++){
                printf("%i\n", output2[i]);

        }


	int arr5[] = {4, 6, 1, 12, 13};
        int arr6[] = {22, 1, 6, 12};

		
	int output3[HASHSIZE];

        int size5 = sizeof(arr5)/sizeof(arr5[0]);
        int size6 = sizeof(arr6)/sizeof(arr6[0]);


	n = intersection(output3, arr5, size5, arr6, size6);

	printf("Common Elements: \n");
        for (int i = 0; i < n; i++){
                printf("%i\n", output3[i]);

        }


	return 0;

}
