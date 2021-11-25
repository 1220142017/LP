#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    int n=1,i,j,l=1;
    
    while(scanf("%d",&n) > 0){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if((i+j+1) == n){
                    printf("2");
                }
                else if(i == j){
                    printf("1");
                }
                else{
                    printf("3");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
