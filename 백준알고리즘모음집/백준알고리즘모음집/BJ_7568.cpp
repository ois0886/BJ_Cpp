#include<iostream>
#include<vector>
using namespace std;
int main() {
	int N;
	cin >> N;

	int* x = new int[N];
	int* y = new int[N];
	for (int i = 0; i < N; i++)
		cin >> x[i] >> y[i];
	for (int i = 0; i < N; i++)
	{
		int num = 1;
		for (int j = 0; j < N; j++)
		{
			if (x[i] < x[j] && y[i] < y[j])
				num++;
		}
		cout << num << " ";
	}

	return 0;

}