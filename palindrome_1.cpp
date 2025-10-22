#include<iostream>
#include<stack>

using namespace std;

bool Palindrome(string s) {
	stack<char> stk;
	for (int i = 0; i < s.length(); i++) {
		stk.push(s[i]);
	}
	for (int i = 0; i < s.length(); i++) {
		if (stk.empty() or s[i] != stk.top()) {
			return false;
		}
		else {
			stk.pop();
		}
	}
	return true;
}

int main() {
	string s;
	cin >> s;
	stack<char> stk;
	
	bool result = Palindrome(s);
	cout <<boolalpha<< result << endl;
	return 0;
}