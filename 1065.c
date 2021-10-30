#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int pares=0,i;
    
    for(i=0;i<5;i++){
        scanf("%d",&n);
        if(n%2 == 0){
            pares = pares + 1;
        }
    }
    printf("%d valores pares\n",pares);
    return 0;
}
