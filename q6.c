#include <stdio.h>

int main() 
{
    int v[10];
    for (int i = 0; i < 10; i++) 
    {
        v[i] = i;
    }
    v[10] = 100;  // Erro proposital criado para demostrar o overflow
    printf("Fim do programa\n");
    return 0;
}
