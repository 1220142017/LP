#include <stdlib.h>
#include <stdio.h>

int main(){
    char soma[18];
    int i,aux,m,n;
    
    for(i=0;i<18;i++){
        soma[i] == NULL;
    }
    
    scanf("%d %d",&n,&m);
    
    while(n != 0 && m != 0){
        aux = n+m;
        sprintf(soma,"%d",aux);
        
    for(i=0;i<strlen(soma);i++){
        if(soma[i] != '0') printf("%c",soma[i]);
    }
    printf("\n");
    
    
    
    for(i=0;i<18;i++){
        soma[i] == NULL;
    }
    
    scanf("%d %d",&n,&m);    
        
    }
    
    
    return 0;
}
