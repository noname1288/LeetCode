#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int prices_size = prices.size();

        /*
        int pointer_1 = 0; //position to buy
        int pointer_2 = 1; //position to sell

        while (pointer_2 < prices_size)
        {
            if (prices[pointer_1] < prices[pointer_2]){
                int current_profit = prices[pointer_2] - prices[pointer_1];
                max_profit = max (current_profit, max_profit);
            } else {
                pointer_1 = pointer_2;
            }

            pointer_2 += 1;
        }*/

        //another solution
        int buy_price = prices[0];

        for (int sell : prices){
            if (buy_price > sell) {
                buy_price = sell;
            }else {
                max_profit= max(max_profit, sell - buy_price);
            }
        }
        

        return max_profit;
    }
};

int main(){
    Solution x;
    vector <int> input = {7,1,5,3,6,4};
    cout << x.maxProfit(input);

    return 0;
}