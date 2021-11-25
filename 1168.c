#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    int n0=6, n1=2, n2=5, n3=5, n4=4, n5=5, n6=6, n7=3, n8=7, n9=6;
    int n, i, j, soma=0;
    char v[100];
    
    for(i=0;i<100;i++)
        v[i] = NULL;
    
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",&v);
        for(j=0;j<strlen(v);j++){
            if(v[j] == '0'){
                soma+=n0;
            }
            else if(v[j] == '1'){
                soma+=n1;
            }
            else if(v[j] == '2'){
                soma+=n2;
            }
            else if(v[j] == '3'){
                soma+=n3;
            }
            else if(v[j] == '4'){
                soma+=n4;
            }
            else if(v[j] == '5'){
                soma+=n5;
            }
            else if(v[j] == '6'){
                soma+=n6;
            }
            else if(v[j] == '7'){
                soma+=n7;
            }
            else if(v[j] == '8'){
                soma+=n8;
            }
            else if(v[j] == '9'){
                soma+=n9;
            }
        }
        printf("%d leds\n",soma);
        soma = 0;
    }
    
    
    return 0;
}
