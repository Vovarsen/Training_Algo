#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> two_sum(vector<int> data, int target) {
	unordered_map<int, int> map;
	for (int i = 0; i < data.size(); i++) {
		map[data[i]] = i;
	}
	for (int i = 0; i < data.size(); i++) {
		int diff = target - data[i];
		if (map.find(diff) != map.end()) {
			return { data[i], diff };
		}
	}
	return{};
}

int main() {
	int n;
	cin >> n;
	int target;
	cin >> target;
	vector<int> data(n);
	for (int i = 0; i < n; i++) {
		cin >> data[i];
	}
	vector<int> result = two_sum(data, target);
	for (int j = 0; j < result.size(); j++) {
		cout << result[j] <<endl;
	}
	return 0;
}