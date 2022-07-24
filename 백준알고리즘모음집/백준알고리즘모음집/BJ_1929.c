#include <stdio.h>
int main() {

    int M, N, i, j;
    int arr[1000001] = { 1,1 };
    // �����佺�׳׽��� ü, �Ҽ��� �ƴѼ� = 1

    for (i = 2; (i * i) < 1000001; i++) {

        if (arr[i] == 0) {

            for (j = i * i; j < 1000001; j += i)

                arr[j] = 1;
        }
    }

    scanf("%d %d", &M, &N);
    // ���� ���� �Ҽ��� ���Ѵ�.

    for (i = M; i <= N; i++) {
        if (arr[i] == 0)
            printf("%d\n", i);
    }

    return 0;
}