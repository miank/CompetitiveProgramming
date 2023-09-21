// FindCharacterCase.cpp 

#include <iostream>
#include <string>
using namespace std;

int findCase(char ch) {
	// Write your code here.
	int c = ch;
	if (c >= 97 && c <= 122) 
	{
		return 0;
	}
	else if (c >= 65 && c <= 90)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}

int main() {
	char ch;
	cin >> ch;

	cout << findCase(ch) << endl;
	return 0;
}