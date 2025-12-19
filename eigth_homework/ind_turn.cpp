#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int indturn(vector<int>nums) {
	int totalsum = 0;
	int leftsum = 0;

	for (int i = 0; i < nums.size(); i++) {
		totalsum = totalsum + nums[i];
	}
	for (int i = 0; i < nums.size(); i++) {
		if (leftsum == totalsum - leftsum - nums[i]) {
			return i;
		}
		leftsum = leftsum + nums[i];
	}
	return -1;
}

int main() {
	int n;
	cin >> n;
	vector<int> nums(n);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	int result = indturn(nums);
	cout << result << endl;
	return 0;
}