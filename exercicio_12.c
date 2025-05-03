#include <stdio.h>

int main() {
    int n, total, white, black;
    
    printf("Digite o valor de n (tamanho do tabuleiro n x n): ");
    scanf("%d", &n);
    
    total = n * n;
    
    if (n % 2 == 0) {
        white = total / 2;
        black = total / 2;
    } else {
        white = (total + 1) / 2;
        black = (total - 1) / 2;
    }
    
    printf("%d casas brancas e %d casas pretas\n", white, black);
    
    return 0;
}