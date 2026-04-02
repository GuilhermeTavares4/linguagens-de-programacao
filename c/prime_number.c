/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num = 0;
    int primo = 1;
    printf("Digite um número: ");
    scanf("%d", &num);
    for (int count = num - 1; count > 1; count--)
    {
        if (num % count == 0) {
            primo = 0;
            break;
        }
    }
    
    if (primo && num != 1) {
        printf("O número é primo.");
    } else {
        printf("O número não é primo.");
    }
    return 0;
}