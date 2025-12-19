#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

bool balance_braket(string s, int k) {
	int balance = 0;
	int extra_close = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '(') {
			balance = balance + 1;
		}
		else {
			if (balance > 0) {
				balance = balance - 1;
			}
			else {
				extra_close = extra_close + 1;
			}
		}
	}
	int total = balance + extra_close;
	return total <= k;
}
int main() {
	string s;
	getline(cin, s);
	int k;
	cin >> k;
	bool result = balance_braket(s, k);
	cout << result << endl;
	return 0;
}