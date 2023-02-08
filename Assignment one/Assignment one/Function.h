#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

void readFile(int array[], int size);
//pre: none
//post: reads integers from file into array.

size_t resize(int** array, size_t oldsize, size_t amount);
//pre: File is read and original array is full
//post: resizes array depending on which function is called

void checkInteger(int n, int array[], int size);
//pre: None
//post: Checks to see if an integer n exists in the array and returns that index

void addInteger(int n, int array[], int size);
//pre: None
//post: adds the integer n to the end of a resized array.

void removeOrReplace(int index, int array[], int size);
//pre: None
//post: Intakes an index value and either replaces the value or removes the value all together.