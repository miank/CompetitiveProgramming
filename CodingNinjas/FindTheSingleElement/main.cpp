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
        m1[arr[i]]++;
    }

    for(auto x : m1){
        if(x.second == 1){
            num = x.first;
            break;
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