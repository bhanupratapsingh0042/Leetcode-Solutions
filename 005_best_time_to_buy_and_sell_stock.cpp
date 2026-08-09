#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = 1e9;
        int max_profit = 0;  // 1. Iski spelling check karo
        
        for(int i = 0; i < prices.size(); i++) {
            if(prices[i] < min_price) {
                min_price = prices[i];
            }
            else if(prices[i] - min_price > max_profit) { // 2. Is line ke brackets dhyan se dekho
                max_profit = prices[i] - min_price;
            }
        }
        return max_profit;
    }
};