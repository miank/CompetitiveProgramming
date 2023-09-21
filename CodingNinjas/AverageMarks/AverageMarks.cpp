// AverageMarks.cpp 

#include <utility>
#include <iostream>
using namespace std;

pair<char, int> averageMarks(char firstLetterOfName, int m1, int m2, int m3) {
	// Write your code here.
	int avg = (m1 + m2 + m3) / 3;
	pair<char, int> p1;
	p1.first = firstLetterOfName;
	p1.second = avg;

	return p1;
}
