#include <stdio.h>

int main (void){
    // declarando array
   int numeros[][4] = {
         {1,2,3},
         {4,5,6},
         {7,8,9},
         {10,11,12}
        };
// variaves para cacular o tamanho da arrai

int linhas = sizeof(numeros)/sizeof(numeros[0]);
int coluna = sizeof(numeros)[0]/sizeof(numeros[0][0]);



// nest loop para percorer a array
  for(int i = 0; i < linhas; i++)
  {
    for(int j = 0; j < coluna; j++)
    {
        printf("%d\t",numeros[i][j]);
    };
    printf("\n");
  };

printf("\n linhas: %d\n",linhas);
printf("colunas: %d",coluna);
  return 0;
}