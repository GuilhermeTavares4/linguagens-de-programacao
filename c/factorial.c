/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num = 0, result = 1;
    printf("Digite um número: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Valor indefinido");
        return 0;
    }
    for(int count = 2; count <= num; count++)
    {
        result = result * count;
    }
    printf("O fatorial de %d é %d.", num, result);
}