#include<iostream>
using namespace std;
int main() {
	int a[42] = { 1,0 };
	int T, n;

	for (int i = 2; i < 42; i++) {
		a[i] = a[i - 1] + a[i - 2];
	}

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> n;
		cout << a[n] << " " << a[n + 1] << endl;
	}
	return 0;
}