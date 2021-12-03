#include <stdio.h>
 
int main() {
 
    int x,y;
    
    scanf("%d",&x);
    scanf("%d",&y);
    if(x<y){
        if(y%x == 0)
            printf("Sao Multiplos\n");
        else
            printf("Nao sao Multiplos\n");
    }
    else{
        if(x%y == 0)
            printf("Sao Multiplos\n");
        else
            printf("Nao sao Multiplos\n");
    }
    return 0;
}
