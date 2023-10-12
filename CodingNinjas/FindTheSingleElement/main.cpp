#include <iostream>
#include <vector>
#include <map>
using namespace std;

int getSingleElement(vector<int> &arr){
	// Write your code here.	
	
    int len = arr.size() - 1;
    int i = 0, j = 1;
    int missingNumber = -1;

    for (int i = 0; i < len;)
    {
        /* code */
        if(arr[i] == arr[j]){
            i++;
            j++;
            continue;
        }
        if(i == len){
            missingNumber = arr[i];
            break;
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