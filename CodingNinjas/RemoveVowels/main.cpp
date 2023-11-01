#include <iostream>
#include <string>
using namespace std;

string removeVowels(string inputString) {
    // Write your code here.
    int len = inputString.size();

    string str;

    for(int i = 0; i < len; i++){
        if(inputString[i] == 'a' || inputString[i] == 'A' || inputString[i] == 'e' || inputString[i] == 'E' ||
        inputString[i] == 'I' || inputString[i] == 'i' || inputString[i] == 'O' || inputString[i] == 'o' || 
        inputString[i] == 'U' || inputString[i] == 'u'){
            continue;
        }
        else{
            str += inputString[i];
        }
    }
    return str;
    
}
