#include <stdio.h>
int main() {

    int M, N, i, j;
    int arr[1000001] = { 1,1 };
    // 에라토스테네스의 체, 소수가 아닌수 = 1

    for (i = 2; (i * i) < 1000001; i++) {

        if (arr[i] == 0) {

            for (j = i * i; j < 1000001; j += i)

                arr[j] = 1;
        }
    }

    scanf("%d %d", &M, &N);
    // 범위 안의 소수를 구한다.

    for (i = M; i <= N; i++) {
        if (arr[i] == 0)
            printf("%d\n", i);
    }

    return 0;
}