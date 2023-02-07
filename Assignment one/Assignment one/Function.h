#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

void readFile(vector<int>& v1);
//pre: no preconditions
//post: Reads file and output each line of integers into a vector of type data.

void returnNumIndex(int n, vector<int> v1);
//pre: no preconditions
//post: Checks if the parameter is in the struct Data, and if so it will return the index value and what line in the text document it was found.

void addInteger(int n, vector<int>& v1);
//pre: Asks user for integer to add
//post: Adds integer to the last vector in the struct Data.

void removeInteger(int n, vector<int>& v1);
//Pre: Asks to replace or remove integer at the entered index value.
//Post: Based on user input, it will remove the integer or replace it with zero.