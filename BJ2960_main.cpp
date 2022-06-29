#include <iostream>
#include<vector>
using namespace std;
int n, k;
bool arr[1001];
int cnt = 0;
int main() {
	cin >> n >> k;
	if (k == 1) {
		cout << 2;
		return 0;
	}
	for (int i = 2; i <= n; i++) {
		for (int j = i; j <= n; j += i) {
			if (!arr[j]) {
				arr[j] = true;
				cnt++;
			}
			if (cnt == k) {
				cout << j;
				return 0;
			}
		}
	}



	return 0;
}


