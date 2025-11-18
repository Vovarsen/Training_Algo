#include <iostream>
#include <vector>
#include <string>
#include<unordered_map>
#include<algorithm>
using namespace std;

vector<vector<string>> group_anagram(vector<string>& strs) {
	unordered_map<string, vector<string>> map;
	
	for (int  i = 0; i < strs.size(); i++) {
		string let = strs[i];
		sort(let.begin(), let.end());
		map[let].push_back(strs[i]);
	}

	vector<vector<string>> res;
	for (auto j = map.begin(); j != map.end(); j++) {
		res.push_back(j->second);
	}
	return res;
}

