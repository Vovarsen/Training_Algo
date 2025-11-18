#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> EvenFirst(vector<int> nums) {
	int evenind = 0;
	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] % 2 == 0) {
			swap(nums[i], nums[evenind]);
			evenind++;
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
	vector<int> result = EvenFirst(arr);
	for (int i = 0; i < n; i++) {
		cout << result[i] << " ";
	}
	return 0;
}