#include "Function.h"

void readFile(int array[], int size) {
	//reads all of the integers from the file integers.txt into the array
	int count = 0;

	fstream inFile;
	inFile.open("integer.txt");
	if (!inFile.is_open()) {
		cout << "File is not open." << endl;
		return;
	}
	else {
		while (count < size && inFile >> array[count])
			count++;
	}
}

size_t resize(int** array, size_t oldsize, size_t amount) {
	//resizes the vector, inspiration from a youtube video
	size_t new_size = oldsize + amount;
	int* new_array = new int[new_size];

	memcpy(new_array, *array, oldsize * sizeof(int));
	delete[] *array;
	*array = new_array;
	return new_size;
}

void checkInteger(int n, int array[], int size) {
	//iterates through the array and if it finds integer n, it prints out where it found the integer n
	//try and exception handling in case the integer n given is out of range of the array.
	try {
		for (int i = 0; i < size; i++) {
			if (array[i] == n) {
				cout << "The integer " << n << " is located at index " << i << endl;
				return;
			}
		}
		cout << "The integer wasn't found in the given array.";
	}
	catch (const out_of_range& e) {
		cout << e.what() << endl;
	}
}

void addInteger(int n, int array[], int size) {
	//iterates through the array and if it finds an empty spot it replaces it with n.
	for (int i = 0; i < size; i++) {
		if (array[i+1] == 0 || array[i+1] < 0) {
			array[i+1] = n;
		}
	}
}

void removeOrReplace(int index, int array[], int size) {
	//asks user to either replace or remove the integer n
	//try and exception handling if the given index is out of range of the array.
	try {
		string action;
		cout << "Would you like to Remove or Replace the integer at index " << index << "? (type 'Remove' or 'Replace' " << endl;
		cin >> action;
		if (action == "Remove") {
			for (int i = index; i < size; i++) {
				array[i] = array[i + 1];
			}
		}

		else if (action == "Replace") {
			for (int i = 0; i < size; i++) {
				if (array[i] == array[index]) {
					array[i] = 0;
				}
			}
		}
	}
	catch (const out_of_range& e) {
		cout << e.what() << endl;
	}
}