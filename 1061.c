#include <stdio.h>
#include <stdlib.h>

int main(){
    int diai,hi,mi,si;
    int diaf,hf,mf,sf;
    int dias,horas,minutos,segundos;
    
    scanf("Dia %d\n",&diai);
    scanf("%d : %d : %d\n",&hi,&mi,&si);
    scanf("Dia %d\n",&diaf);
    scanf("%d : %d : %d",&hf,&mf,&sf);
    
    dias = diaf - diai;
    horas = hf - hi;
    minutos = mf - mi;
    segundos = sf - si;
    
    if(segundos<0){
        segundos += 60;
        minutos -= 1;
    }
    if(minutos<0){
        minutos += 60;
        horas -= 1;
    }
    if(horas<0){
        horas += 24;
        dias -= 1;
    }
    
    printf("%d dia(s)\n",dias);
    printf("%d hora(s)\n",horas);
    printf("%d minuto(s)\n",minutos);
    printf("%d segundo(s)\n",segundos);
    return 0;
}
