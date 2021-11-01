#include <stdio.h>
#include <stdlib.h>

int main(){
    int j, positivo=0;
    float num;
    for(j=1;j<=6;j++){
        scanf("%f",&num);
        if(num > 0){
            positivo += 1;
        }
    }
    
    printf("%d valores positivos\n",positivo);
    
    return 0;
}
