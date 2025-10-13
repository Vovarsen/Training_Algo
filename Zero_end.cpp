#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> ZeroEnd(vector<int> nums) {
	int zeroind = 0;
	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] != 0) {
			swap(nums[i], nums[zeroind]);
			zeroind++;
		}
	}

	return nums;
}

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	vector<int> result = ZeroEnd(arr);
	for (int i = 0; i < n; i++) {
		cout << result[i] << " ";
	}
	return 0;
}