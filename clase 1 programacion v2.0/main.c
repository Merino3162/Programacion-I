#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define CANTIDAD 10

int main()
{
    char letra;
    int contadorA=0, contadorE=0, contadorI=0, contadorO=0, contadorU=0, iteraciones=0;

    printf("\n Ingrese diez letras: ");
    do
    {
        fflush(stdin);
        scanf("%c",&letra);
        letra=tolower(letra);
        switch(letra)
        {
        case 'a':
            contadorA++;
            break;
        case 'e':
            contadorE++;
            break;
        case 'i':
            contadorI++;
            break;
        case 'o':
            contadorO++;
            break;
        case 'u':
            contadorU++;
            break;
        }
        iteraciones++;
    }while(iteraciones<CANTIDAD);

    printf("\n\nCantidad de A: %d, cantidad de E: %d, cantidad de I: %d, cantidad de O: %d, cantidad de U: %d", contadorA, contadorE, contadorI, contadorO, contadorU);


    return 0;
}
