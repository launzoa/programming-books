/*Esse exercício avulso busca receber uma expressão infixa e transforma-la em pós fixa*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char *converter_polonesa(char infixa[]);

int calculadora(char polonesa[]);

int main()
{
    char infixa[] = {'(', '1', '*', '(', '2', '*', '3', '+', '4', ')', ')', '\0'};
   
    //(A*(B*C+D))
    //ABC*D+*
    char *polonesa = converter_polonesa(infixa);
    
    for(int i = 0; i < strlen(polonesa); i++)
    {
        printf("%c", polonesa[i]);
    }

    int resultado = calculadora(polonesa);
    printf("\nO resultado dessa polonesa eh: %d", resultado);
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


int calculadora(char polonesa[])
{
    int i = 0, j, n = strlen(polonesa), topo = 0, resultado = 0;
    int *pilha = malloc(sizeof(int) * n);
    //(1*(2*3+4))
    //123*4+*

    while(i <= n)
    {
        if(polonesa[i] == '+' || polonesa[i] == '-' || polonesa[i] == '*' || polonesa[i] == '/')
        {
            int n2 = pilha[--topo];
            int n1 = pilha[--topo];

            switch(polonesa[i])
            {
                case '+':
                    resultado = n1 + n2;
                    break;

                case '-':
                    resultado = n1 - n2;
                    break;

                case '*':
                    resultado = n1 * n2;
                    break;

                case '/':
                    resultado = n1 / n2;
                    break;
            }
            pilha[topo++] = resultado;
        }
        else
        {
            
            int num = polonesa[i] - '0';
            pilha[topo++] = num;
        }
        i++;
    }
    return pilha[0];
}