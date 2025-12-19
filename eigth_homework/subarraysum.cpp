#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std;
int subarraysum(vector<int> nums, int k) {
	int prefixsum = 0;
	unordered_map<int , int>prefixcount;
	prefixcount[0] = 1;
	int count = 0;

	for (int num = 0; num < nums.size(); num++) {
		prefixsum = prefixsum + nums[num];
		if (prefixcount.find(prefixsum) != prefixcount.end()) {
			count = count + prefixcount[prefixsum - k];
		}
		prefixcount[prefixsum] = prefixcount[prefixsum] + 1;
	}
	return count;
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
	int result = subarraysum(nums, k);
	cout << result << endl;
	return 0;
}