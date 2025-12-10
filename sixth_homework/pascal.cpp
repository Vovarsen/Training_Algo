#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

vector<vector<int>> pascal_triangle(int n) {
	vector<vector<int>>dp;
	for (int i = 1; i <= n; i++) {
		vector<int>tmp;
		for (int j = 1; j <= i; j++) {
			tmp.push_back(1);
		}
		dp.push_back(tmp);
	}

	for (int row = 1; row < n; row++) {
		for (int col = 1; col < row; col++) {
			dp[row][col] = dp[row - 1][col - 1] + dp[row - 1][col];
		}
	}
	return dp;
}

int main() {
	int n;
	cin >> n;
	vector<vector<int>> result = pascal_triangle(n);
	for (int row = 0; row < n; row++) {
		for (int col = 0; col <= row; col++) {
			cout << result[row][col];
		}
		cout << endl;
	}
	return 0;
}