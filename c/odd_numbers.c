/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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