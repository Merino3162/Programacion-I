#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 5
/*
  realizar un programa que pida 4 numeros a usuario
y que muestre el promedio.
el numero tiene que ser mayor a 0

calcular mayor y menor.
*/

int main()
{
    /*
    int numero1=0, numero3=0, numero2=0;
    float promedio;

    while(numero1==0||numero2==0||numero3==0)
    {
        printf("Ingrese un numero mayor a 0: ");
        if(numero1==0)
        {
            scanf("%d",&numero1);
            if(numero1<=0)
                numero1=0;
        }
        else if(numero2==0)
        {
            scanf("%d",&numero2);
            if(numero2<=0)
                numero2=0;
        }
        else
        {
            scanf("%d",&numero3);
            if(numero2<=0)
                numero2=0;
        }
    }

    promedio=(float)(numero1+numero2+numero3)/3;

    printf("\nEl promedio de %d, %d, y %d es: %.2f .", numero1, numero2, numero3, promedio);*/

    int numero, suma=0, i, numeroMayor, numeroMenor;
    float promedio;

    for(i = 1 ; i < CANTIDAD + 1 ; i++)
    {
        do
        {
            printf("ingrese un numero \n");
            scanf("%d", &numero);
        }while(numero<=0);

        if(FLAG==0)//------------------------------------>| ES MEJOR UTILIZAR FLAG Y NO EL ITERADOR
            {                                          //SE ENTIENDE MEJOR EL CODIGO. SE UTILIZA UNA SOLA VEZ
                numeroMayor=numero;
                numeroMenor=numero;
            }
        else
            {
                if(numero>numeroMayor)
                numeroMayor=numero;
                else
                    if(numero<numeroMenor)
                    numeroMenor=numero;
            }
        suma=suma+numero;
    }

    promedio= (float) suma / CANTIDAD;
    printf("\n\n\tEl promedio es: %.2f\n\n\t el mayor numero ingresado fue: %d y el menor ingresado fue: %d\n\n", promedio, numeroMayor, numeroMenor);


    return 0;

    /*MAL. Podria haber usado una sola variable de ingreso, Usar un Do-While para comprobar.*/
}
