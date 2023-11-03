#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    printf(" Digite um numero inteiro positivo ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0; // Números menores ou iguais a 1 não são primos
    } else {
        for (i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                isPrime = 0;
                break;  
            }
        }
    }

    if (isPrime) {
        printf("%d e um numero primo.\n", num);
    } else {
        printf("%d nao e um numero primo.\n", num);
    }

    return 0;
}