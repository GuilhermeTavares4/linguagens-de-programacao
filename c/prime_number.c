#include <stdio.h>

void main()
{
    int num = 0;
    int is_prime = 1;
    printf("Digite um número: ");
    scanf("%d", &num);
    for (int count = num - 1; count > 1; count--)
    {
        if (num % count == 0) {
            is_prime = 0;
            break;
        }
    }
    
    if (is_prime && num != 1) {
        printf("O número é primo.");
    } else {
        printf("O número não é primo.");
    }
    return 0;
}