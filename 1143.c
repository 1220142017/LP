#include <stdio.h>
 
int main() {
 
    int i,ii,iii,inter;
    scanf("%d",&inter);
    for(i=1;i<=inter;i++){
        ii = i*i;
        iii = ii*i;
        printf("%d %d %d\n",i,ii,iii);
    }
 
    return 0;
}
