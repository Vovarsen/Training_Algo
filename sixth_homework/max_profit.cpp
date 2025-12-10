#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int maxProfit(vector<int>prices) {
	int profit = 0;
	int min_price = prices[0];
	for (int currentPrice = 1; currentPrice < prices.size(); currentPrice++) {
		profit = max(profit, prices[currentPrice] - min_price);
		min_price = min(prices[currentPrice], min_price);
	}
	return profit;
}