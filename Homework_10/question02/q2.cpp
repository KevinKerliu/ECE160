#include <iostream>

using namespace std;

int addFive(int **ptr){

	int num = **ptr+5;
	**ptr = num;
	return **ptr;

}

int main(){

	int i = 5;
	int *p = &i;
	int **pp = &p;
	cout << "**pp: " << **pp << endl;
	//addFive(pp);
	cout << "addFive(pp): " << addFive(pp) << endl;
	return 0;
}
