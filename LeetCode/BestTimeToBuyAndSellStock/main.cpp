#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy_price = prices[0];

        int profit = 0;

        for (int i = 1; i < prices.size(); i++){
            if(prices[i] < buy_price){
                buy_price = prices[i];
            }
            else{
                int current_profit = prices[i] - buy_price;
                profit = max(current_profit, profit);
            }
        }

        return profit;
    }
};

int main(){
    Solution obj;
    vector<int> v{7, 1, 5, 3, 6, 4};
    int ele(0);  

    cout << obj.maxProfit(v) << endl;
    return 0;
}
