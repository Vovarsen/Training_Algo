#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> shell_sort(vector<int> arr) {
	int n = arr.size();
	int gap = n / 2;
	while (gap > 0) {
		for (int cur = gap; cur < n; cur++) {
			int m_gap = cur;
			while (m_gap >= gap && arr[m_gap] < arr[m_gap - gap]){
				swap(arr[m_gap], arr[m_gap - gap]);
				m_gap -= gap;
				}
		}
		gap = gap / 2;
	}
	return arr;
}