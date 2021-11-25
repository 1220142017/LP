#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    int n,i,j,passo;
    char pri[50],seg[50],junta[100];
    for(i=0;i<50;i++){
        pri[i] = NULL;
        seg[i] = NULL;
    }
    for(i=0;i<100;i++){
        junta[i] = NULL;
    }
    
    scanf("%d",&n);
  
    for(i=0;i<n;i++){
        scanf("%s %s",pri,seg);
        passo=0;
        for(j=0;j<50;j++){
            if(pri[j] != NULL){
                junta[passo] = pri[j];
                passo++;
            }
            if(seg[j] != NULL){
                junta[passo] = seg[j];
                passo++;
            }
        }  
        printf("%s\n",junta);
        for(j=0;j<100;j++){
            junta[j] = NULL;
        }
        for(j=0;j<50;j++){
            pri[j] = NULL;
            seg[j] = NULL;
        }
    }
    return 0;
}
