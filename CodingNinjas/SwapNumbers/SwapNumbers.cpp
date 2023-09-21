// SwapNumbers.cpp 

#include <utility>
#include <iostream>
using namespace std;

pair < int, int > swap(pair < int, int > swapValues) {
	// Write your code here.
	pair<int, int> p1;
	p1.first = swapValues.second;
	p1.second = swapValues.first;

	return p1;
}

