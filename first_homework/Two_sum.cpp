//Two Sum
#include <iostream>
#include<vector>
#include <tuple>

using namespace std;

tuple < int, int> Two_Sum(vector<int> nums, int  target) {

	int left = 0;
	int right = nums.size() - 1 ;

	while (left < right) {
		if (nums[left] + nums[right] == target) {
			return make_tuple(left, right);
		}
		else if (nums[left] + nums[right] > target) {
			right--;
		}
		else {
			left++;
		}
	}
	return make_tuple(left, right);
}

int main() {
	int n;
	cin >> n;
	vector<int> nums(n);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	int target;
	cin >> target;
	tuple<int, int> result = Two_Sum(nums, target);
	cout << get<0>(result) << get<1>(result)<< endl;
	return 0;
}