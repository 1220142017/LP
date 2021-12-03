#include <stdio.h>
 
int main() {
 
    int vet[1000];
    int zero=0,i,t;
    scanf("%d",&t);
    for(i=0;i<1000;i++){
        vet[i] = zero;
        if(zero == t-1)
            zero = 0;
        else
            zero++;
    }
    for(i=0;i<1000;i++){
        printf("N[%d] = %d\n",i,vet[i]);
    }
 
    return 0;
}
