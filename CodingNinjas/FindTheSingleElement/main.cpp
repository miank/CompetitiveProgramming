#include <iostream>
#include <vector>
#include <map>
using namespace std;

int getSingleElement(vector<int> &arr){
	// Write your code here.	
	
    int size = sizeof(arr) -1;
    int i = 0, j = 1;
    int missingNumber = 0;

    for (int i = 0; i < size; i++)
    {
        /* code */
        if(i == size){
            missingNumber = arr[i];
            break;
        }
        if(arr[i] == arr[j]){
            j++;
            continue;
        }
    }
    return missingNumber;
}

int main(){
    int ele(0);
    cin >> ele;

    vector<int> v;

    for (int i = 0; i < 5; i++)
    {
        /* code */
        cin >> ele;
        v.push_back(ele);
    }

    cout << getSingleElement(v) << endl;
    return 0;    
}