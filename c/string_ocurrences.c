#include <stdio.h>
#include <string.h>

int main()
{
    char phrase[200] = "";
    char word[20] = "";
    printf("Digite uma frase: ");
    fgets(phrase, sizeof(phrase), stdin);
    printf("Digite uma palavra: ");
    scanf("%s", &word);
    int word_length = strlen(word);
    int phrase_length = strlen(phrase);
    int count = 0;
    int repeated_count = 0;
    while (count < phrase_length)
    {
        char substring[word_length];
        int substring_count = 0;
        int phrase_substring_index = count;
        
        while (substring_count < word_length)
        {
            substring[substring_count] = phrase[phrase_substring_index];
            substring_count++;
            phrase_substring_index++;
        }
        
        printf("%s \n", substring);
        if (strcmp(substring, word) == 0){
            repeated_count++;
        }
        
        count++;
    }
    
    printf("A palavra repetiu %d vezes.", repeated_count);
}