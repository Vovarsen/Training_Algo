#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> Sort_0(vector<int>& arr) {
	int left = 0;
	int right = arr.size() - 1;

	while (left < right) {
		if (arr[left] == 0) {
			left++;
		}
		else if (arr[right] == 1) {
			right--;
		}
		else{
			swap(arr[left], arr[right]);
			left++;
			right--;
		}
	}
	return arr;
}

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	vector<int> result = Sort_0(arr);
	for (int i = 0; i < n; i++) {
		cout << result[i] << " ";
	}
	return 0;
}