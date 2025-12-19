#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int MaxSum(vector<int> arr, int k) {
	if (arr.size() < k) {
		return 0;
	}
	int currsum = 0;
	for (int i = 0; i < k; i++) {
		currsum = currsum + arr[i];
	}
	int maxsum = currsum;

	for (int i = k; i < arr.size(); i++) {
		currsum = currsum - arr[i - k] + arr[i];
		maxsum = max(maxsum, currsum);
	}
	return maxsum;
}
