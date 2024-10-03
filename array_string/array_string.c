#include <stdio.h>
#include <string.h>


int main (void){ 
// criando array 2d de carros
char carros[][10] ={"corsa","palio","celta"};
   
// criando variacel do tamaho da array
char tamanho_array = sizeof(carros)/sizeof(carros[0]);
 // copianto a string "tesla" na posiçao 0 da array carros


strcpy(carros[0],"tesla");

for(int i = 0; i < tamanho_array; i++){
    printf("%s\n",carros[i]);
}
    
}