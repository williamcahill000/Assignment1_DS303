#include <iostream>
#include "Function.h"
using namespace std;

int main() {
	//Defines the size of the array and a dynamic pointer array
	size_t arr_size = 100;
	int* array = new int[arr_size];


	readFile(array, arr_size);
	checkInteger(456, array, arr_size);

	//resizes the vector, couldn't get it workiing with calling it inside of addInteger function.

	int new_size = resize(&array, arr_size, 1);
	addInteger(6, array, new_size);
	removeOrReplace(8, array, new_size);

	for (int i = 0; i < new_size; i++) {
		cout << array[i] << endl;
	}
}