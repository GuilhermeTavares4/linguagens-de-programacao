/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float fahrenheit_temperature = 0;
    printf("Digite uma temperatura em Farenheit: ");
    scanf("%f", &fahrenheit_temperature);
    float celsius_temperature = (fahrenheit_temperature - 32) * 5 / 9;
    printf("A temperatura em Celius é %.1f", celsius_temperature);
}