#include<iostream>
#include <vector>
#include<queue>
using namespace std;

vector<int> merge_k_arrays(vector<vector<int>>& sortedArrays) {
	vector<int> mergeArray;

	priority_queue<int, vector<int>, greater<int>> minHeap;
	for (int i = 0; i < sortedArrays.size(); i++) {
		vector<int> curArray = sortedArrays[i];

		if (curArray.size() > 0) {
			for (int j = 0; j < curArray.size(); j++) {
				minHeap.push(curArray[j]);
			}
		}
	}
	while (!minHeap.empty()) {
		int val = minHeap.top();
		minHeap.pop();
		mergeArray.push_back(val);
	}
	return mergeArray;
}