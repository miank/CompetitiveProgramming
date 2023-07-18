// RemoveDuplicates.cpp 

#include <iostream>
#include <string>
using namespace std;

void removeConsecutiveDuplicates(char* input) {
	/* Don't write main().
	* Don't read input, it is passed as function argument.
	* Change in the given string itself.
	* No need to return or print anything
	* Taking input and printing output is handled automatically.
	*/
	int i = 0;
	char ch[100];
	while (input != "\0") {
		if (input[i] != input[i + 1]) {
			ch[i] = input[i + 1];
		}
		i++;
	}

	cout << ch << endl;
}

int main()
{
	char ch[100];
	cin.get(ch, 100);

	removeConsecutiveDuplicates(ch);

	return 0;
}

