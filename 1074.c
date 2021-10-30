#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i,num;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%d",&num);
        
        if(num == 0){
            printf("NULL\n");
        }
        else{
            if(num%2 == 0){
                if(num<0){
                    printf("EVEN NEGATIVE\n");
                }
                else{
                    printf("EVEN POSITIVE\n");
                }
            }
            else{
                if(num<0){
                    printf("ODD NEGATIVE\n");
                }
                else{
                    printf("ODD POSITIVE\n");
                }            
            }
        }
    }
    return 0;
}
