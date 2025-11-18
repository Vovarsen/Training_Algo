#include<iostream>


using namespace std;

bool Palindrome(string s) {
	int left = 0;
	int right = s.size() - 1;

	while (left < right) {
		if (s[left] != s[right]) {
			return false;
		}
		else {
			left++;
			right--;
		}
	}
	return true;

}

int main() {
	string s;
	cin >> s;

	bool result = Palindrome(s);
	cout << boolalpha << result << endl;
	return 0;
}