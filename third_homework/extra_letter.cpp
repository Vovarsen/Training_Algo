#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

char extra_letter(string a, string b) {
	unordered_map<char, int>  map;
	for (int i = 0; i < b.length(); i++) {
		map[b[i]]++;
	}
	for (int i = 0; i < a.length(); i++) {
		if (map.find(a[i])!=map.end()) {
			map[a[i]]--;

			if (map[a[i]] == 0) {
				map.erase(a[i]);
				continue;
			}
			continue;
		}
		return a[i];

	}
	return ' ';
	
}

int main() {
	string a;
	cin >> a;
	string b;
	cin >> b;
	char result = extra_letter(a, b);
	cout << result << endl;
}
