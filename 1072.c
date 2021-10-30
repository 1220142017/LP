#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i,num,in=0,out=0;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%d",&num);
        if(num >= 10 && num <= 20){
            in = in + 1;
        }
        else{
            out = out + 1;
        }
    }

    printf("%d in\n",in);
    printf("%d out\n",out);

    return 0;
}
