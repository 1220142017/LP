#include <stdio.h>
 
int main() {
    
    int i,x,y,soma=0;

    scanf("%d",&x);
    scanf("%d",&y);
    if(x>y){
        i = x;
        x = y;
        y = i;
    }
    for(x;x<=y;x++){
        if(x%13 != 0){
            soma += x;
        }
    }
    printf("%d\n",soma);
    return 0;
}
