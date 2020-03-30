#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Remplazar los ' ? ' al siguiente programa [DESCARGAR], para lograr la siguiente funcionalidad.
Limpie la pantalla
Asigne a las variables numero1 y numero2 los valores obtenidos
Realice la resta de dichas variables
Muestre el resultado por pantalla


int main()
{
    int numero1;
    int numero2;
    int resta;

    printf("Ingrese un numero: ");
    scanf("%d", &numero1);
    printf("\n\nIngrese otro numero: ");
    scanf("%d", &numero2);

    resta = numero1 - numero2;

    printf("\n\n\nEl resultado de la resta es: %d", resta);
}
*/

/*
Limpie la pantalla
Solicite dos valores numéricos al usuario distintos de cero
Asigne a las variables numero1 y numero2 los valores obtenidos
Realice la resta de dichas variables
Muestre el resultado por pantalla
Muestre por pantalla la leyenda "Resultado positivo" en caso de ser mayor
Muestre por pantalla la leyenda "Resultado negativo" si es menor que cero
int main()
{
    int numero1;
    int numero2;
    int resta;

    printf("Ingrese un numero distinto de cero: ");
    scanf("%d", &numero1);
    if(numero1<=0)
    {
         do
        {
            printf("Incorrecto, vuelva a ingresar: ");
            scanf("%d", &numero1);

        }while(numero1<=0);


    }

    printf("Ingrese un numero distinto de cero: ");
    scanf("%d", &numero2);

    if(numero2<=0)
    {
        do
        {
            printf("Incorrecto, vuelva a ingresar: ");
            scanf("%d", &numero2);

        }while(numero2<=0);
    }
    resta = numero1 - numero2;
    printf("Resultado: %d", resta);

    if(resta>0)
    {
        printf("Resultado positivo");
    }
    else
    {
        if(resta<0)
        {
            printf("Resultado negativo");
        }
    }
}
*/

/*
Escribir un programa que realice las siguientes acciones:
Solicite al usuario 10 números
Calcule cuántos son negativos y cuantos son positivos
Muestre por pantalla la cantidad de negativos y la cantidad de positivos
int main()
{
    int numeros[10];
    int i;
    int positivos = 0;
    int negativos = 0;


    for(i=0; i<10; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &numeros[i]);
        printf("\n\n");
        if(numeros[i] > 0)
        {
            positivos++;
        }
        else
        {
            if(numeros[i]<0)
            {
                negativos++;
            }
        }
    }

    system("CLS");
    printf("\n\nPositivos: %d\n\nNegativos: %d", positivos, negativos);
    getch();
}
*/
