#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void  Reverse(vector<int>& nums, int left, int right ) {

	while (left < right) {
		swap(nums[left], nums[right]);
		left++;
		right--;
	}

}

vector <int> Reverse_part(vector<int> nums, int k) {
	int n = nums.size();
	Reverse(nums, 0, n - 1);
	Reverse(nums, 0, k - 1);
	Reverse(nums, k, n - 1);
	return nums;

}

int main() {
	int n;
	cin >> n;
	vector<int> nums(n);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	int k;
	cin >> k;
	vector<int> result = Reverse_part(nums, k);
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << " ";
	}
	return 0;
}

