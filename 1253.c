#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    int n,i,j,cod;
    char texto[50],caracter;
    
    for(i=0;i<50;i++)
        texto[i] = NULL;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%s",texto);
        scanf("%d",&cod);
        
        for(j=0;j<strlen(texto);j++){
            caracter = texto[j] - cod;
            if(caracter < 65) printf("%c",caracter+26);
            else printf("%c",caracter);
        }
        printf("\n");
    }
    

    return 0;
}
