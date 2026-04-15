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
    printf("Produto adicionado.\n");
    return novo;
}


void exibir_lista(Node* lista){
    if (lista == NULL)
    {
        printf("Não há nenhum produto em estoque.\n");
        return;
    }
    
    Node* atual = lista;
    printf("Lista dos produtos:\n");
    while (atual != NULL)
    {
        printf("=============\n");
        printf(
            "Produto: %s\nCódigo: %d\nPreço: R$%.2f\n", 
            atual->produto.nome, 
            atual->produto.codigo, 
            atual->produto.preco
        );
        printf("=============\n");
        atual = atual->next;
    }
}


void busca(Node* lista){
    char nome[30];
    printf("Digite o nome de um produto: ");
    scanf("%s", &nome);
    printf("\n");
    int foi_encontrado = 0;
    Node* atual = lista;
    while (atual != NULL)
    {
        if (strcmp(atual->produto.nome, nome) == 0)
        {   
            foi_encontrado = 1;
            printf("Produto encontrado:\n");
            printf("=============\n");
            printf(
            "Produto: %s\nCódigo: %d\nPreço: R$%.2f\n", 
                atual->produto.nome, 
                atual->produto.codigo, 
                atual->produto.preco
            );
            printf("=============\n");
        }
        
        atual = atual->next;
    }
    
    if (foi_encontrado == 0)
    {
        printf("Nenhum produto com o nome %s foi encontrado.\n", nome);
    }
}


void libera(Node* lista){
    Node* temp = lista;
    while (lista != NULL)
    {
        lista = lista->next;
        free(temp);
    }
}


void main()
{
    Node* lista = NULL;
    while (1)
    {
        printf("Digite uma ação (adicionar, buscar, exibir ou sair): ");
        char input[30];
        scanf("%s", &input);
        printf("\n");

        if (strcmp(input, "adicionar") == 0)
        {
            lista = adicionar(lista);   
        } 
        else if (strcmp(input, "buscar") == 0)
        {
            busca(lista);
        }
        else if (strcmp(input, "exibir") == 0)
        {
            exibir_lista(lista);
        }
        else if (strcmp(input, "sair") == 0)
        {
            libera(lista);
            lista = NULL;
            printf("Memória liberada.\n");
            break;
        }
        else 
        {
            printf("Comando não encontrado.\n");
        }
    }
}