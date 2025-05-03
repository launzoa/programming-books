#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, p;
    char *frase;
    scanf("%d %d", &n, &p);
    for(int i = 0; i < n; i++) scanf("%s", frase);

    printf("%d", p);

    return 0;
}