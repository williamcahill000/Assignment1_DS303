#include "Function.h"

void readFile(vector<int>& v1) 
{
	//Opening the file
	fstream inFile;
	inFile.open("integer.txt");
	if (!inFile.is_open()) {
		cout << "File did not open" << endl;
	}
	
	string inString;
	int a, b, c, d, e, f, g, h, i, j;

	//gets line and assigns each integer to a variable and inserts it to the end of the vector.
	while (getline(inFile, inString)) {
		stringstream ss;
		ss << inString;
		ss >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j;
		v1.insert(v1.end(), { a, b, c, d, e, f, g, h, i, j });
	}

	//closes file
	inFile.close();

}

void returnNumIndex(int n, vector<int> v1) {
	//iterates through the vector and checks if the integer is inside the vector, otherwise returning nothing.
	int index = 0;
	for (int i = 0; i < v1.size(); i++) {
		if (v1[i] == n) {
			index = i;
			cout << "The integer " << n << " was found at index value " << i << endl;
		}
	}
	if (v1[index] != n) {
		cout << "The integer wasn't found in the given vector";
	}
}

void addInteger(int n, vector<int>& v1) {
	v1.insert(v1.end(), n);
	cout << "the integer you gave was entered.";
}

void removeInteger(int n, vector<int>& v1) {
	string action;
	cout << "Do you want to remove the integer or replace the integer with zero? " << endl;
	cout << "Type remove or replace: " << endl;
	cin >> action;
	if (action == "remove") {
		v1.erase(v1.begin() + n);

	}
	else if (action == "replace") {
		for (int i = 0; i < v1.size(); i++) {
			if (i = n) {
				v1[i] = 0;
			}
			break;
		}
	}
}