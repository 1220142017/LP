#include <stdlib.h>
#include <stdio.h>

int main(){
    int *vet,i;
    
    vet = malloc(sizeof(int)*5000);
    
    for(i=0;i<5000;i++){
        vet[i] = i;
    }
    for(i=0;i<5000;i++){
        printf("%d \n",vet[i]);
    }
    
    return 0;
}
