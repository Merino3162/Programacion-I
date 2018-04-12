#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int numeroA=0;
    int numeroB=0;
    int comprobador, flagNumeroA=0, flagNumeroB=0;
    float resultadoSuma, resultadoResta, resultadoDivicion, resultadoMultiplicacion, resultadoFactorial;

    while(seguir=='s')
    {
        printf("\n\n**************************************************************************\n\nnumeroA: %d\nnumeroB: %d\n\n",numeroA, numeroB);
        menu();
        fflush(stdin);
        comprobador=scanf("%d",&opcion);
        if(comprobador!=1)
        {
            system("cls");
            printf("\nSOLO SE PUEDE INGRESAR NUMEROS EN EL MENU. \(1, 2, 3, 4, 5, 6, 7, 8, 9\) \n\n");
            continue;
        }
        system("cls");
        switch(opcion)
        {
            case 1:
                comprobador=tomarNumero(&numeroA);
                 if(comprobador!=0){
                    printf("\n ERROR AL TOMAR EL NUMERO A !!!");
                    printf("INGRESO A= %d\n\n",numeroA);
                }
                else{
                    flagNumeroA=1;
                    printf("INGRESO A= %d\n\n",numeroA);
                }
                break;
            case 2:
                comprobador=tomarNumero(&numeroB);
                if(comprobador!=0){
                    printf("\n ERROR AL TOMAR EL NUMERO B !!!");
                    printf("INGRESO B= %d\n\n",numeroB);
                }
                else{
                    flagNumeroB=1;
                    printf("INGRESO B= %d\n\n",numeroB);
                }
                break;
            case 3:
                if(flagNumeroA==0 || flagNumeroB==0)
                {
                    printf("\nPRIMERO DEBE INGRESAR TODOS LOS NUMEROS A SUMAR\n\n");
                }
                else
                {
                    comprobador=suma(numeroA, numeroB, &resultadoSuma);
                    if(comprobador!=0)
                        printf("\nERROR AL SUMAR!!");
                    else
                        printf("INGRESO A= %d\n\n",numeroA);
                        printf("INGRESO B= %d\n\n",numeroB);
                        printf("\n SUMA A + B = %.1f\n\n\n", resultadoSuma);
                }
                break;
            case 4:
                if(flagNumeroA==0 || flagNumeroB==0)
                {
                    printf("\nPRIMERO DEBE INGRESAR TODOS LOS NUMEROS A RESTAR\n\n");
                }
                else
                comprobador=resta(numeroA, numeroB, &resultadoResta);
                if(comprobador!=0)
                        printf("\nERROR AL RESTAR!!");
                    else{
                        printf("\nINGRESO A= %d\n",numeroA);
                        printf("\nINGRESO B= %d\n",numeroB);
                        printf("\n RESTA A - B = %.1f\n\n\n", resultadoResta);
                    }
                break;
            case 5:
                if(flagNumeroA==0 || flagNumeroB==0)
                {
                    printf("\nPRIMERO DEBE INGRESAR TODOS LOS NUMEROS A DIVIDIR\n\n");
                }
                else
                comprobador=divicion(numeroA, numeroB, &resultadoDivicion);
                switch(comprobador)
                {
                case -2:
                    printf("\nNO SE PUEDE DIVIDIR ENTRE 0. por favor, igrese un numero distinto de 0 en B.\n");
                    break;
                case -1:
                    printf("\nERROR AL DIVIDIR\n\n");
                    break;
                case 0:
                        printf("\nINGRESO A= %d\n",numeroA);
                        printf("\nINGRESO B= %d\n",numeroB);
                        printf("\n DIVICION A / B = %.1f\n\n\n", resultadoDivicion);
                    break;
                }
                break;
            case 6:
                 if(flagNumeroA==0 || flagNumeroB==0)
                {
                    printf("\nPRIMERO DEBE INGRESAR TODOS LOS NUMEROS A MULTIPLICAR\n\n");
                }
                else{
                    comprobador=multiplicacion(numeroA, numeroB, &resultadoMultiplicacion);
                    if(comprobador==-1)
                        printf("\nERROR AL MULTIPLICAR!!\n");
                    else
                    {
                        printf("\nINGRESO A= %d\n",numeroA);
                        printf("\nINGRESO B= %d\n",numeroB);
                        printf("\n MULTIPLICACION A * B = %.1f\n\n\n", resultadoMultiplicacion);
                    }
                }
                break;
            case 7:
                if(flagNumeroA==0)
                {
                    printf("\nPRIMERO DEBE INGRESAR UN NUMERO A PARA EL FACTORIAL\n\n");
                }
                else
                {
                    comprobador=factorial(numeroA, &resultadoFactorial);
                    switch(comprobador)
                    {
                    case -1:
                        printf("\nERROR DE FACTORIAL\n\n");
                        break;
                    case -2:
                        printf("\nNO SE PUEDE SACAR EL FACTORIAL DE TAL NUMERO. Intenta introducir un numero mas chico en A\n\n");
                        break;

                    case 0:
                        printf("\nINGRESO A= %d\n",numeroA);
                        printf("\n FACTORIAL A! = %.1f\n\n\n", resultadoFactorial);
                        break;
                    }
                }
                break;
            case 8:
                printf("NumeroA= %d\nNumeroB= %d\n", numeroA, numeroB);
                if(flagNumeroA==1)
                {
                    if(flagNumeroB==1)
                    {
                        comprobador=suma(numeroA, numeroB,&resultadoSuma);
                        if(comprobador==0)
                            printf("\nSuma: %.2f ",resultadoSuma);
                        else
                            printf("\nError al sumar");
                        comprobador=resta(numeroA, numeroB, &resultadoResta);
                        if(comprobador==0)
                            printf(", Resta: %.2f ", resultadoResta);
                        else
                            printf(", Error al restar");
                        comprobador=multiplicacion(numeroA, numeroB, &resultadoMultiplicacion);
                        if(comprobador==0)
                            printf(", Resultado multiplicacion: %.2f, \n", resultadoMultiplicacion);
                        else
                            printf("error al multiplicar, ");
                        comprobador=divicion(numeroA, numeroB, &resultadoDivicion);
                        switch(comprobador)
                        {
                        case 0:
                            printf("divicion: %.2f, ", resultadoDivicion);
                            break;
                        case -1:
                            printf("Error al dividir, ");
                            break;
                        case -2:
                            printf("No se puede dividir por 0!!!!, ");
                            break;
                        }
                            comprobador=factorial(numeroA, &resultadoFactorial);
                            if(comprobador==0)
                            printf("factorial A!: %.2f\n", resultadoFactorial);
                            else if(comprobador==-1)
                                printf("\n\nerror al factorear\n");
                            else
                                printf("\n\nIngrese un numero mas bajo en A para obtener su factoreo A!");
                    }
                    else
                        {
                            comprobador=factorial(numeroA, &resultadoFactorial);
                            if(comprobador==0)
                            printf("factorial A!: %.2f\n", resultadoFactorial);
                            else if(comprobador==-1)
                                printf("\n\nerror al factorear\n");
                            else
                                printf("\n\nIngrese un numero mas bajo en A para obtener su factoreo A!");
                            printf("\nDEBE TENER Numero B PARA HACER EL RESTO DE OPERACIONES!");
                        }
                }
                else
                    printf("\nPRIMERO INGRESAR NUMEROS \(OPCION 1 Y 2\).");
                break;
            case 9:
                printf("\n\nGracias por utilizar esta calculadora!!\n\n\t\tCristian Merino, 1ero H.\n");
                seguir = 'n';
                break;
        }
    }

    return 0;
}
