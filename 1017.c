#include <stdio.h>
 
int main() {
 
    float x,y,dist,consumo;
    
    scanf("%f",&x);
    scanf("%f",&y);
    dist = x*y;
    consumo = dist/12;
    printf("%.3f\n",consumo);
    
    return 0;
}
