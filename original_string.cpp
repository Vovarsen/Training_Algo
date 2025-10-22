#include<iostream>
#include<queue>
using namespace std;

bool original_string(string a, string b) {
	queue<char> q;

	for (int i = 0; i < a.length(); i++) {
		q.push(a[i]);
	}
	for (int j = 0; j < b.length(); j++) {
		if (!q.empty() && b[j] == q.front()) {
			q.pop();
		}
	}
	return q.empty();
}

int main() {
	string a;
	cin >> a;
	string b;
	cin >> b;
	queue<char>q;

	bool result = original_string(a, b);
	cout <<boolalpha<< result << endl;

	return 0;
}


