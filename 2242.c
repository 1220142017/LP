#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    char vet[50],vet1[50],vet2[50];
    int i,j=0;
    
    for(i=0;i<50;i++){
        vet1[i] = '0';  
        vet[i] = '0';
    }
    
    scanf("%s",&vet);
    

    
    for(i=0;i<50;i++){
        if(vet[i] == 'a' || vet[i] == 'e' || vet[i] == 'i' || vet[i] == 'o' || vet[i] == 'u'){
            vet1[j] = vet[i];
            j++;
        }
    }
    for(i=0;i<j;i++){
        if(vet1[i] != vet1[j-1-i]){
            printf("N\n");
            return 0;
        }
    }
    printf("S\n");
    
    return 0;
}
