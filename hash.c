#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define N 127

struct estrutura_registro
{
    char palavra[12];
    int contador;
    struct estrutura_registro *prox;
};
typedef struct estrutura_registro Registro;
typedef Registro* Hash[N];

void inicializa(Hash tabela);
int hash(char *palavra);
void verifica(Hash tabela, char *palavra);
void leitura(FILE *arquivo, Hash tabela);
void imprimir(Hash tabela);

int main()
{
    FILE *arquivo = fopen("../arquivo.txt", "r");
    Hash tabela;

    inicializa(tabela);

    leitura(arquivo, tabela);

    imprimir(tabela);

    fclose(arquivo);

    return 0;
}

void inicializa(Hash tabela)
{
    for(int i = 0; i < N; i++)
    {
        tabela[i] = NULL;
    }
}


int hash(char *palavra)
{
    int i, cont = 0;
    for(i = 0; palavra[i] != '\0'; i++) cont += palavra[0];
    
    return cont % N;
}


void verifica(Hash tabela, char *palavra)
{
    int indice = hash(palavra);
    Registro *atual = tabela[indice];
    Registro *anterior = NULL;

    while(atual != NULL)
    {
        if(strcmp(atual->palavra, palavra) == 0)
        {
            atual->contador++;
            return;
        }
        anterior = atual;
        atual = atual->prox;
    }
    
    Registro *novo = malloc(sizeof(Registro));
    strcpy(novo->palavra, palavra);
    novo->palavra[11] = '\0';
    novo->contador = 1;
    novo->prox = NULL;

    if(anterior == NULL)
    {
        tabela[indice] = novo;
    }
    else
    {
        anterior->prox = novo;
    }
}


void leitura(FILE *arquivo, Hash tabela)
{
    char linha[100];
    
    while(fgets(linha, sizeof(linha), arquivo))
    {
        linha[strcspn(linha, "\n")] = '\0';
        
        char *token = strtok(linha, " ");
        while(token != NULL)
        {
            verifica(tabela, token);
            token = strtok(NULL, " ");
        }
    }
}


void imprimir(Hash tabela)
{
    printf("Conteudo da tabela:\n");
    printf("Posicao\tPalavra\tQuantidade\n");

    for(int i = 0; i < N; i++)
    {
        printf("Posicao %3d: ", i);
        if(tabela[i] != NULL)
        {
            Registro *atual = tabela[i];
            while(atual != NULL)
            {
                printf("[\"%s\" -> %d] ", atual->palavra, atual->contador);
                if(atual->prox != NULL) printf("\t->\t");
                atual = atual->prox;
            }
            printf("\n");
        }
        else printf("[Vazio]\n");
    }
}