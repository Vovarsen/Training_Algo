#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int feed_anim(vector<int> need, vector<int> food) {
	if (need.size() == 0 || food.size() == 0) {
		return 0;
	}
	sort(need.begin(), need.end());
	sort(food.begin(), food.end());

	int count = 0;
	for (int i = 0; i < food.size(); i++) {
		if (food[i] > need[count]) {
			count++;
		}
		if (count == need.size()) {
			break;
		}
	}
	return count;
}

int main() {
	int n;
	cin >> n;
	vector<int> need(n);
	for (int i = 0; i < n; i++) {
		cin >> need[i];
	}
	vector < int> food(n);
	for (int j = 0; j < n; j++) {
		cin >> food[j];
	}
	int result = feed_anim(need, food);
	cout << result << endl;
	return 0;
}