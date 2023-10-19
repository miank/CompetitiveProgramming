#include <iostream>
#include <vector>
#include <map>
using namespace std;

int getSingleElement(vector<int> &arr){
	// Write your code here.	
		
    
    int num = 0;
    map<int, int> m1;
    for (int i = 0; i < arr.size(); i++)
    {
        /* code */
		if(arr[i] != arr[i+1]){
            num = arr[i];
			break;
		}
        if(arr[i] == arr[i+1]){
			i++;
			continue;
		}
    }


    return num;
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