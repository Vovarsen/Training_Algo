#include<vector>
#include<iostream>

using namespace std;

int sequence_1(int n) {
	vector<int> dp = { 1,2 };

	for (int i = 2; i <= n; i++) {
		dp.push_back(dp[i - 1] + dp[i - 2]);
	}
	return dp[n];
}

int main() {
	int n;
	cin >> n;
	int result = sequence_1(n);
	cout << result << endl;
	return 0;
}