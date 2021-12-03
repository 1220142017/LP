#include <stdio.h>
 
int main() {
 
    float i,num,media,qtd=0;
    for(i=0;i<6;i++){
        scanf("%f",&num);
        if(num>0){
            media+=num;
            qtd++;
        }
    }
    media = media/qtd;
    printf("%.0f valores positivos\n",qtd);
    printf("%.1f\n",media);
    return 0;
}
