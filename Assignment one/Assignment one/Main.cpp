#include <iostream>
#include "Function.h"
using namespace std;

int main() {
	vector<int> v1;
	readFile(v1);
	returnNumIndex(456, v1);
	addInteger(6, v1);
	removeInteger(8, v1);
}