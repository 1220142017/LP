#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i,num;
    
    scanf("%d",&n);
    
    for(i=1;i<=10;i++){
        num = n * i;
        printf("%d x %d = %d\n",i,n,num);
    }
    return 0;
}
