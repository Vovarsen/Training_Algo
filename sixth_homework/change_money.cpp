#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int coinChange(vector<int>coins, int amount) {
	vector<int>dp(amount + 1, INT_MAX);
	dp[0] = 0;

	for (int i = 1; i <= amount; i++) {
		for (int coin : coins) {
			if (coin <= i) {
				dp[i] = min(dp[i], dp[i - coin] + 1);
			}
		}
	}
	if (dp[amount] == INT_MAX) {
		return -1;
	}
	return dp[amount];
}

int main() {
	int n;
	cin >> n;
	vector<int>coins(n);
	for (int i = 0; i < coins.size(); i++) {
		cin >> coins[i];
	}
	int amount;
	cin >> amount;
	int result = coinChange(coins, amount);
	cout << result << endl;
	return 0;
}