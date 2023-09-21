#include <vector>
using namespace std;

vector<int> sumOfEvenOdd(long long num) 
{
	// Write your code here.
	vector<int> v;

    int even(0), odd(0);
    while(num > 0){
        long long r = num % 10;
        long long q = num / 10;
        num = q;

        if(r % 2 == 0){
            even += r;
        }
        else{
            odd += r;
        }

    }

    v.push_back( even);
	v.push_back( odd);
    return v;
}

