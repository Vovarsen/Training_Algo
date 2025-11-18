#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector <int> Reverse(vector<int> nums) {
	int left = 0;
	int right = nums.size() - 1;

	while (left < right) {
		swap(nums[left], nums[right]);
		left++;
		right--;
	}
	return nums;
}

int main() {
	int n;
	cin >> n;
	vector<int>nums(n);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	vector<int>result = Reverse(nums);
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << " ";
	}
	return 0;
}