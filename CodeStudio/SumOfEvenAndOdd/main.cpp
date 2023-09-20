#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int num(0);
    cin >> num;

    int even(0), odd(0);
    while(num > 0){
        int r = num % 10;
        int q = num / 10;
        num = q;

        if(r % 2 == 0){
            even += r;
        }
        else{
            odd += r;
        }

    }

    cout << even << " " << odd << endl;
    return 0;
}