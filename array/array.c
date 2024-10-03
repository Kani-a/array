#include <stdio.h>

int main(){

    int arr[] = {1,2,3,4,5};
    printf("%i\n",arr[1]);

    //so permite printar apenas 1 elemento da array precisamos correr a array pra printar toda a arry


// size of verifica o tamanho de uma variavel em bytes 
    for(int i =0;i < sizeof(arr)/sizeof(arr[0]); i++){
        printf("%i\t",arr[i]);
    }
    return 0;
}