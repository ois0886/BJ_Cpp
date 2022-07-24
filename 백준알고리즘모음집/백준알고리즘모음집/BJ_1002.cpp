#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main() {
	int num;
	cin >> num;
	int x1, y1, r1, x2, y2, r2;
	vector<int> result;

	for (int i = 0; i < num; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		int d = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
		int R1, R2;
		R1 = (r1 + r2) * (r1 + r2);
		R2 = (r1 - r2) * (r1 - r2);

		if (d == 0 && r1 == r2) {
			result.push_back(-1);
		}

		else if (d == R1 || d == R2) {
			result.push_back(1);
		}
		else if (d > R1 || d < R2) {
			result.push_back(0);
		}
		else if (d < R1 || d > R2) {
			result.push_back(2);
		}


	}
	for (int i = 0; i < num; i++) {
		cout << result[i] << endl;
	}

	return 0;

}