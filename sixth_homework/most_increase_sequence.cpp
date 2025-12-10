#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int findLIS(vector<int> nums) {
	if (nums.size() == 0) {
		return 0;
	}
	if (nums.size() == 1) {
		return 1;
	}
	vector<int>dp;
	for (int i = 0; i < nums.size(); i++) {
		dp.push_back(1);
	}
	for (int i = 1; i < nums.size(); i++) {
		if (nums[i - 1] < nums[i]) {
			dp[i] = dp[i - 1] + 1;
		}
	}
	int max = dp[0];
	for (int i = 0; i < nums.size(); i++) {
		if (dp[i] > max) {
			max = dp[i];
		}
	}
	return max;
}