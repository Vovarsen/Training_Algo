#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> Niderlands(vector<int> arr) {
	int low = 0;
	int mid = 0;
	int high = arr.size() - 1;
	while (mid <= high) {
		if (arr[mid] == 0) {
			swap(arr[mid], arr[low]);
			low++;
			mid++;
		}
		else if (arr[mid] ==1) {
			mid++;
		}
		else if (arr[mid] == 2){
			swap(arr[mid], arr[high]);
			high--;
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
	vector<int> result = Niderlands(arr);
	for (int i = 0; i < n; i++) {
		cout << result[i] << " ";
	}
	return 0;
}