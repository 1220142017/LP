#include <stdio.h>
#include <stdlib.h>

int main(){
    int i=-1,num,j;
    
    scanf("%d",&num);
    if(num%2 == 0){
        i = num + 1;
    }
    else{
        i = num;
    }
    for(j=1;j<=6;j++){
        printf("%d\n",i);
        i = i + 2;
    }
    
    return 0;
}
