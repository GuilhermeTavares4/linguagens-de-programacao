/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    char frase[200] = "";
    char palavra[20] = "";
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    printf("Digite uma palavra: ");
    scanf("%s", &palavra);
    int string_length = strlen(palavra);
    printf("%d", string_length);
    
    
}