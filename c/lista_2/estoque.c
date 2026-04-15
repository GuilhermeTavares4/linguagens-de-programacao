#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Produto {
    char nome[30];
    int codigo;
    double preco;
} Produto;


typedef struct node {
    Produto produto;
    struct node* next;
} Node;


Node* adicionar(Node* lista){
    Node* novo = (Node*) malloc(sizeof(Node));
    
    printf("Nome do produto: ");
    scanf("%s", novo->produto.nome);
    printf("Código: ");
    scanf("%d", &novo->produto.codigo);
    printf("Preço: ");
    scanf("%lf", &novo->produto.preco);
    
    novo->next = lista;
    return novo;
}


void exibir_lista(Node* lista){
    Node* atual = lista;
    while (atual != NULL)
    {
        printf("%s - ", atual->produto.nome);
        printf("%d - ", atual->produto.codigo);
        printf("%.2f\n", atual->produto.preco);
        atual = atual->next;
    }
}


void busca(Node* lista){
    char nome[30];
    printf("Digite um nome de um produto: ");
    scanf("%s", &nome);
    int foi_encontrado = 0;
    Node* atual = lista;
    while (atual != NULL)
    {
        if (strcmp(atual->produto.nome, nome) == 0)
        {
            printf("Produto encontrado:\n");
            printf("%s - ", atual->produto.nome);
            printf("%d - ", atual->produto.codigo);
            printf("%.2f\n", atual->produto.preco);
            foi_encontrado = 1;
        }
        
        atual = atual->next;
    }
    
    if (foi_encontrado == 0)
    {
        printf("Nenhum produto com o nome %s foi encontrado.", nome);
    }
}


void main()
{
    Node* lista = NULL;
    lista = adicionar(lista);
    lista = adicionar(lista);
    busca(lista);
}