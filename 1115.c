#include <stdio.h>
 
int main() {
    
    int i,x,y;
    
    for(i=1;i==1;i=1){
        scanf("%d",&x);
        scanf("%d",&y);
        
        if(x == 0 && y == 0){
            break;
        }
        else if(x == 0){
            break;
        }
        else if(y == 0){
            break;
        }
        else if(x > 0 && y > 0){
            printf("primeiro\n");
        }
        else if(x > 0 && y < 0){
            printf("quarto\n");
        }
        else if(x < 0 && y > 0){
            printf("segundo\n");
        }
        else if(x < 0 && y < 0){
            printf("terceiro\n");
        }
    }
    return 0;
}
