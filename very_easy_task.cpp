#include <iostream>
using namespace std;

int copy_Time(int N, int x, int y) {
	int l = 0;
	int r = (N - 1) * max(x, y);

	while (l + 1 < r) {
		int mid = l + (r - l) / 2;
		if (mid / x + mid / y < N - 1) {
			l = mid;
		}
		else {
			r = mid;
		}
	}
	return r + min(x, y);

}

int main() {
	int N;
	cin >> N;
	int x;
	cin >> x;
	int y;
	cin >> y;

	int result = copy_Time(N, x, y);
	cout << result << endl;
	return 0;
}