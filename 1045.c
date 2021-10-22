#include <iostream>
#include <stdio.h>
#include <stdlib.h>
 
using namespace std;
 
int main() {
 
    float a,b,c,aa,bb,cc;
    float aux;
    
    scanf("%f %f %f",&a,&b,&c);
    if(b > a && b > c){
        aux = a;
        a = b;
        b = aux;
    }
    else if(c > b && c > a){
        aux = a;
        a = c;
        c = aux;
    }
    if(c > b){
        aux = b;
        b = c;
        c = aux;
    }
    aa = a*a;
    bb = b*b;
    cc = c*c;
    
    if(a >= (b+c)){
        printf("NAO FORMA TRIANGULO\n");
    }
    else{
        if((aa) == (bb) + (cc)){
            printf("TRIANGULO RETANGULO\n");
        }
        else if((aa) > (bb) + (cc)){
            printf("TRIANGULO OBTUSANGULO\n");
        }
        else if((aa) < (bb) + (cc)){
            printf("TRIANGULO ACUTANGULO\n");
        }
        
        if(a ==b && a == c){
            printf("TRIANGULO EQUILATERO\n");
        }
        else if(a == b || a == c || b == c){
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
