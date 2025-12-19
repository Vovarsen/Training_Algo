#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std;
int maxlensubarray(vector<int>nums) {
	int prefixsum = 0;
	int maxlen = 0;
	unordered_map<int, int> indexmap;
	indexmap[0] = -1;

	for (int i = 0; i < nums.size(); i++) {
		int num = nums[i];
		if (num == 0) {
			prefixsum = prefixsum - 1;
		}
		else {
			prefixsum = prefixsum + 1;
		}
		if (indexmap.find(prefixsum) != indexmap.end()) {
			maxlen = max(maxlen, i - indexmap[prefixsum]);
		}
		else {
			indexmap[prefixsum] = i;
		}
	}
	return maxlen;
}

int main() {
	int n;
	cin >> n;
	vector<int> nums(n);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	int result = maxlensubarray(nums);
	cout << result << endl;
	return 0;
}