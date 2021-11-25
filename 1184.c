#include <stdlib.h>
#include <stdio.h>

int main(){
    int n,i,j,aux=0;
    double mat[12][12],soma=0.0;
    char caracter;
    
    scanf("%c",&caracter);
    
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&mat[i][j]);
        }
    }
    
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            if(i>j){
                soma += mat[i][j];
                aux++;
            }  
        }
    }
    if(caracter == 'S') printf("%.1lf\n",soma);
    else if(caracter == 'M') printf("%.1lf\n",soma/aux);
    return 0;
}
