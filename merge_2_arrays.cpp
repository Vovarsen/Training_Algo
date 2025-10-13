#include<iostream>
#include<vector>
//#include<algorithm>
using namespace std;

vector<int> Mergin(vector<int> arr1, vector<int> arr2) {
	int i = 0;
	int j = 0;
	vector<int> arr3;
	while (i < arr1.size() && j < arr2.size()) {
		if (arr1[i] < arr2[j]) {
			arr3.push_back(arr1[i]);
			i++;
		}
		else {
			arr3.push_back(arr2[j]);
			j++;
		}
	}

	while ( i < arr1.size()) {
		arr3.push_back(arr1[i]);
		i++;
	}
	while ( j < arr2.size()) {
		arr3.push_back(arr2[j]);
		j++;
	}
	return arr3;
}

int main() {
	int n1;
	cin >> n1;
	vector <int> arr1(n1);
	for (int i = 0; i < n1; i++) {
		cin >> arr1[i];
	}
	int n2;
	cin >> n2;
	vector <int> arr2(n2);
	for (int j = 0; j < n2; j++) {
		cin >> arr2[j];
	}

	vector<int>arr3 = Mergin(arr1, arr2);
	for (int k = 0; k < arr3.size(); k++) {
		cout << arr3[k] << " ";
	}
	return 0;
}