#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    int n,i,j,k;
    
    scanf("%d",&n);

    while(n != 0){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                for(k=0;k<n;k++){
                    if(i == k || i == n-k-1 || j == k || j == n-k-1){
                        if(k+1 < 10) printf("  ");
                        else printf(" ");

                        printf("%d",k+1);
                        if(j < n-1) printf(" ");
                        break;
                    }
                }
            }
            printf("\n");
        }
        printf("\n");
        
        
        scanf("%d",&n);
    }

    return 0;
}
