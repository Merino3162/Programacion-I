#include <stdio.h>
#include <stdlib.h>

void menu()
{
    printf("\n1- ingresar numero A.\n2- ingresar numero B.\n3- calcula suma de los numeros ingresados.\n4- resta de A - B.\n5- divide A./B\n6-multiplica A y B.\n7- factorial A!.\n8- calcula todas las operaciones.\n9- salir.\n");
}

int tomarNumero(int* numero)
{
    int retorno, auxScan;

    printf("\n\ningrese un numero: ");
    auxScan=scanf("%d",&retorno);
    if(auxScan!=1)
    {
        printf("\n\nSOLO INGRESAR NUMEROS!!!!!!!! \n\n");
        retorno=-1;
    }
    else
    {
        *numero=retorno;
        retorno=0;
    }
    return retorno;
}

int suma(int numero, int sumador, float* resultado)
{
    int returnAux=-1;

    if(resultado!=NULL)
    {
        *resultado=numero + sumador;
        returnAux=0;
    }
    return returnAux;
}

int resta(int minuendo, int sustraendo, float* diferencia)
{
    int auxReturn=-1;

    if(diferencia!=NULL)
    {
        *diferencia=minuendo-sustraendo;
        auxReturn=0;
    }
    return auxReturn;
}

int divicion(int dividendo, int divisor, float* resultado)
{
    int auxReturn=0;

    if(resultado==NULL)
        auxReturn=-1;
    else if(divisor==0)
        auxReturn=-2;
        else
    {
        *resultado=(float)dividendo/divisor;
    }
    return auxReturn;
}

int multiplicacion(int multiplicando, int multiplicador, float* producto)
{
    int auxReturn=-1;

    if(producto!=NULL)
    {
        *producto=multiplicando*multiplicador;
        auxReturn=0;
    }
    return auxReturn;
}

int factorial(int factor, float* resultado)
{
    int auxReturn=0, i;
    float auxResultado=factor;

    if(resultado==NULL)
        auxReturn=-1;
    else if(factor>13)
        auxReturn=-2;
    else
    {
        for(i=factor-1;i>0;i--)
        {
            auxResultado=auxResultado*i;
        }
        *resultado=auxResultado;
    }
    return auxReturn;
}
