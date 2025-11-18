#include<iostream>
#include<vector>
using namespace std;

int Max_min_multiplication(vector<int>& data) {
	if (data.size() < 3) {
		return -1;
	}
	int min_ind = 1;
	int max_ind = 2;
	int i = 0;
	while (true) {
		int min_ind_tmp = 2 * i + 1;
		if (min_ind_tmp < data.size()) {
			min_ind = min_ind_tmp;
			i = min_ind_tmp;
			continue;
		}
		break;
	}

	i = 0;
	while (true) {
		int max_ind_tmp = 2 * i + 2;
		if(max_ind_tmp > data.size()){
			max_ind = max_ind_tmp;
			i = max_ind_tmp;
			continue;
		}
		break;
	}

	int result = data[min_ind] * data[max_ind];
	return result;
}