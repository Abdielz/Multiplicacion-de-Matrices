#include <stdio.h>

int FA,CA,FB,CB,Co=0,i,j,k;


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
            printf("%d\t", &A[i][j]);
            Co=Co+1;
            };
        };
   };
fclose(Matriz1);   
}
else
{
printf("\nLa multiplicacion no se puede realizar");
printf("\nverifique que las matrices sean conpatibles");
}


return 0;
}