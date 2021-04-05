//Programa: Multiplicación de matrices
//Autores: Abdiel Andrade Hernández, Doribeth Andrade Hernández
//Clase: Programación Científica
//Fecha: 04/04/21
//Descripción: El programa pide al usuario la cantidad de filas y columnas de dos matrices ya antes guardadas, verifica si se pueden multiplicar (misma cantidad de filas y columnas), si no se pueden muestra el mensaje "la multiplicación no se puede realizar" y se termina el programa, si se puede realizar la multipliación la guarda en otro archivo.
#include <stdio.h> // Se incluye la libreria de entrada y salida

int FA,CA,FB,CB,Co=0,C1=0,C2=0,i,j,k; // Se declaran las variables


int main()
{
printf("Numero de filas de A:"); // Se pide el numero de filas de la matriz A al usuario 
scanf("%d",&FA); // Lee los datos introducidos por el usuario
printf("Numero de Columnas de A:"); // Se pide el numero de columnas de la matriz A al usuario 
scanf("%d",&CA); // Lee los datos introducidos por el usuario
printf("Numero de filas de B:"); // Se pide el numero de filas de la matriz B al usuario 
scanf("%d",&FB); // Lee los datos introducidos por el usuario
printf("Numero de Columnas de B:"); // Se pide el numero de columnas de la matriz B al usuario 
scanf("%d",&CB); // Lee los datos introducidos por el usuario

int A[FA][CA],B[FB][CB],C[FA][CB]; // Se declaran las variables de las 3 matrices

if (CA==FB) // Evalúa si el número de columnas de la matriz A es igual al número de filas de la matriz B realizar la operación
{
FILE *Matriz1; 
Matriz1=fopen("Matriz1.txt","r"); //Abre la matriz A
   while (Co<FA)  
   {
       printf("\nMatriz 1:"); // Muestra la matriz A
       for (i = 0; i < FA; ++i) 
       {
        printf("\n"); //Se pasa a la siguiente linea 
            for (j = 0; j < CA; ++j)
            {
            fscanf(Matriz1,"%d", &A[i][j]); //Muestra los elementos de la matriz A 
            printf("%d\t", A[i][j]); // Imprime un espacio entre los elementos de la matriz A
            Co=Co+1;
            };
        };
   };
fclose(Matriz1); //Cierra la matriz A

FILE *Matriz2;
Matriz2=fopen("Matriz2.txt","r"); //Abre la matriz B
   while (C1<FB)
   {
       printf("\nMatriz 2:"); //Muestra la matriz B
       for (i = 0; i < FB; ++i)
       {
        printf("\n"); 
            for (j = 0; j < CB; ++j)
            {
            fscanf(Matriz2,"%d", &B[i][j]); //Muestra los elementos de la matriz B
            printf("%d\t", B[i][j]); // Imprime un espacio entre los elementos de la matriz B
            C1=C1+1;
            };
        };
   };
fclose(Matriz2); //Cierra la matriz B

for (i = 0; i < FA; ++i)
{
    for (j = 0; j < CB; ++j)
    {
        C[i][j]=0;
        for (k = 0; k < CA; ++k)
        {
            C[i][j]+=A[i][k]*B[k][j]; //Realiza la multiplicación de la matriz A*B
        }
    }   
}
    printf("\nMatriz Resultante\n"); //Imprime la matriz resultante
    for (i = 0; i < FB; i++) 
    {
        for (j = 0; j < CB; j++) 
        {
            printf("%d\t ", C[i][j]); 
        }
        printf("\n");
    }
FILE *MatrizResultante;
MatrizResultante = fopen("Matriz Resultante.txt","w"); // Guarda la matriz resultante de la multiplicación
 for (i = 0; i < FB; i++) 
    {
        for (j = 0; j < CB; j++)
        {
        fprintf(MatrizResultante,"%d\t", C[i][j]); 
        }
        fprintf(MatrizResultante,"\n");
    }
fclose(MatrizResultante); //Cierra la matriz resultante
}
else
{
printf("\nLa multiplicacion no se puede realizar"); // Si el tamaño de la columna de la matriz A es diferente al tamaño de la fila de la matriz B muestra el mensaje la multiplicacion no se puede realizar, verifique que las matrices sean compatibles.
printf("\nverifique que las matrices sean conpatibles");
}
return 0;
}