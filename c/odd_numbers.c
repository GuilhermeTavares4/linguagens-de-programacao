#include <stdio.h>

int main()
{
    int num = 0;
    printf("Digite um número: ");
    scanf("%d", &num);
    for (int count = 1; count <= num; count += 2)
    {
        printf("%d ", count);
    }
}