#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i,num,in=0,out=0;
    
    scanf("%d",&n);
    
    for(i=0;i<10000;i++){
        if(i%n == 2){
            printf("%d\n",i);
        }
    }
    return 0;
}
