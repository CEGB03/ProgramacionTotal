#include <stdio.h>
#include <stdlib.h>

void Sumar(int hh, int mm, int ss);

int main()
{
    int hh=0, mm=0, ss=0;
    char suma=' ';
    printf("¿Desea Sumar horas?");
    scanf(" %c",&suma);
    while (suma=='s' || suma=='S')
    {
        printf("¿Desea volver a Sumar horas?");
        scanf(" %c",&suma);
    }
    
    return 0;
}
void Sumar(int hh, int mm, int ss)
{

}
