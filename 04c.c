#include <stdlib.h>
#include <stdio.h>

int main(){
    int vet[3][3];
    int i,j,cont=1;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++){
            vet[i][j] = cont;
            cont++;
        }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d ",vet[i][j]);
    
        printf("\n");
    }
    
    return 0;
}
