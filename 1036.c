#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
using namespace std;
 
int main() {
 
    double a, b, c, delta, r1, r2;
    double t1,t2,t3;
    scanf("%lf %lf %lf",&a,&b,&c);
    delta = (b*b) - (4*a*c);
    if(delta < 0 || a == 0){
        printf("Impossivel calcular\n");
    }
    else{
        t1 = sqrt(delta);
        t2 = b * (-1);
        t3 = 2*a;
        r1 = (t2 + t1)/t3;
        r2 = (t2 - t1)/t3;
        
        printf("R1 = %.5f\n",r1);
        printf("R2 = %.5f\n",r2);
    }
    

    return 0;
}
