// CheckPermutation.cpp 

#include <iostream>
#include <string>
using namespace std;

bool areAnagram(string& str1, string& str2) {
	// Write your code here.
	bool result = true;
	if (str1.size() != str2.size()) {
		return false;
	}

	int arr[26] = { 0 };
	for (int i = 0; i < str1.length(); i++)
	{
		arr[str1[i] - 'a']++;
		arr[str2[i] - 'a']--;
	}

	for (int i = 0; i < 26; i++)
	{
		if (arr[i] != 0) {
			result = false;
			break;

		}
	}

	return result;
}

int main()
{
	string str1, str2;
	cin >> str1 >> str2;

	cout << areAnagram(str1, str2) << endl;
	return 0;
}