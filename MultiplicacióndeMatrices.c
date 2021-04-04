#include <stdio.h>

int FA,CA,FB,CB,FC,CC,Co=0,C1=0,C2=0,i,j,k;


int main()
{
printf("Numero de filas de A:");
scanf("%d",&FA);
printf("Numero de Columnas de A:");
scanf("%d",&CA);
printf("Numero de filas de B:");
scanf("%d",&FB);
printf("Numero de Columnas de B:");
scanf("%d",&CB);

int A[FA][CA],B[FB][CB],C[FA][CB];

if (CA==FB)
{
FILE *Matriz1;
Matriz1=fopen("Matriz1.txt","r");
   while (Co<FA)
   {
       printf("\nMatriz 1:");
       for (i = 0; i < FA; ++i)
       {
        printf("\n");
            for (j = 0; j < CA; ++j)
            {
            fscanf(Matriz1,"%d", &A[i][j]);
            printf("%d\t", A[i][j]);
            Co=Co+1;
            };
        };
   };
fclose(Matriz1); 

FILE *Matriz2;
Matriz2=fopen("Matriz2.txt","r");
   while (C1<FB)
   {
       printf("\nMatriz 2:");
       for (i = 0; i < FB; ++i)
       {
        printf("\n");
            for (j = 0; j < CB; ++j)
            {
            fscanf(Matriz2,"%d", &B[i][j]);
            printf("%d\t", B[i][j]);
            C1=C1+1;
            };
        };
   };
fclose(Matriz2); 

for (i = 0; i < FA; ++i)
{
    for (j = 0; j < CB; ++j)
    {
        C[i][j]=0;
        for (k = 0; k < CA; ++k)
        {
            C[i][j]+=A[i][k]*B[k][j];
        }
    }   
}

    printf("\nMatriz Resultante\n");
    for (i = 0; i < FB; i++) 
    {
        for (j = 0; j < CB; j++) 
        {
            printf("%d\t ", C[i][j]);
        }
        printf("\n");
    }

}
else
{
printf("\nLa multiplicacion no se puede realizar");
printf("\nverifique que las matrices sean conpatibles");
}


return 0;
}