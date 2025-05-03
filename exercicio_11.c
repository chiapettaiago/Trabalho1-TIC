#include <stdio.h>

int main() {
    int N;

    while (1) {
        scanf("%d", &N);  // Ler valor de N

        if (N == 0)
            break;  // Encerra o programa se N for 0

        int total = 0;

        for (int k = 1; k <= N; k++) {
            total += (N - k + 1) * (N - k + 1);
        }

        printf("%d\n", total);
    }

    return 0;
}
