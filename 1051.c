#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario,montante=0.0,imposto;
    
    scanf("%f",&salario);
    
    if(salario <= 2000.00){
        printf("isento\n");
    }
    else if(salario <= 3000.00){
        montante = salario - 2000.00;
        imposto = montante * 0.08;
        printf("R$ %.2f\n",imposto);
    }
    else if(salario <= 4500.00){
        imposto += 1000.00 * 0.08;
        montante = salario - 3000.00;
        imposto += montante * 0.18;
        printf("R$ %.2f\n",imposto);
    }
    else{
        imposto += 1000.00 * 0.08;
        imposto += 1500.00 * 0.18;
        montante = salario - 4500.00;
        imposto += montante * 0.28;
        printf("R$ %.2f\n",imposto);
    }
    return 0;
}
