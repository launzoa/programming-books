/*Esse exercício avulso busca receber uma expressão infixa e transforma-la em pós fixa*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char *converter_polonesa(char infixa[]);


int main()
{
    char infixa[] = {'(', 'A', '*', '(', 'B', '*', 'C', '+', 'D', ')', ')', '\0'};
   
    //(A*(B*C+D))
    
    char *polonesa = converter_polonesa(infixa);
    
    for(int i = 0; i < strlen(polonesa); i++)
    {
        printf("%c", polonesa[i]);
    }

    
    return 0;
}


char *converter_polonesa(char infixa[])
{
    int n = strlen(infixa), i, t = 0, j = 0;
    char *polonesa = malloc(sizeof(char) * n);
    char *pilha = malloc(sizeof(char) * n);
    char x;
    pilha[t++] = infixa[0];

    for(i = 1; infixa[i] != '\0'; i++)
    {
        switch(infixa[i])
        {
            case '(':
                pilha[t++] = infixa[i];
                break;

            case ')':
                while(true)
                {
                    x = pilha[--t];
                    if(x == '(') break;
                    polonesa[j++] = x;
                }
                break;

            case '+':
            case '-':
                while(true)
                {
                    x = pilha[t-1];
                    if(x == '(') break;
                    --t;
                    polonesa[j++] = x;
                }
                pilha[t++] = infixa[i];
                break;

            case '*':
            case '/':
                while(true)
                {
                    x = pilha[t-1];
                    if(x == '(' || x == '+' || x == '-') break;
                    --t;
                    polonesa[j++] = x;
                }
                pilha[t++] = infixa[i];
                break;

            default:
                polonesa[j++] = infixa[i];
        }
    }
    free(pilha);
    polonesa[j] = '\0';

    return polonesa;
}