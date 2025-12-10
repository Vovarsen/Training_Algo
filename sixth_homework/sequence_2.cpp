#include<vector>
#include<iostream>

using namespace std;

int sequence_2(int n) {
	vector<int> dp = { 1,2,4 };

	for (int i = 3; i <= n; i++) {
		dp.push_back(dp[i - 1] + dp[i - 2] + dp[i-3]);
	}
	return dp[n];
}

int main() {
	int n;
	cin >> n;
	int result = sequence_2(n);
	cout << result << endl;
	return 0;
}