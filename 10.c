#include <stdio.h>
#include <stdlib.h>

int checa_linhas(int mat[9][9]){
    int i,j,k,check[10],aux;

    for(i=0;i<9;i++){
        check[0]=1;
        for(j=1;j<=9;j++){
            check[j] = 0;   
        }
        for(j=0;j<9;j++){
                aux = mat[i][j];
                check[aux]+=1;
        }
        for(j=1;j<=9;j++){
            if(check[j] > 1){
                return 1;
            }
        }
    }
    return 0;
}

int checa_colunas(int mat[9][9]){
    int i,j,k,check[10],aux;

    for(i=0;i<9;i++){
        check[0]=1;
        for(j=1;j<=9;j++){
            check[j] = 0;   
        }
        for(j=0;j<9;j++){
                aux = mat[j][i];
                check[aux]+=1;
        }
        for(j=1;j<=9;j++){
            if(check[j] > 1){
                return 1;
            }
        }
    }
    return 0;
}

int checa_mini_matrix(int mat[9][9],int n,int m){
    int i,j,k,num,check;
    
    for(num=1;num<=9;num++){
        check = 0;
        for(i=n;i<n+3;i++){
            for(j=m;j<m+3;j++){
                if(mat[i][j] == num){
                    check++;
                }
            }
        }
        if(check>1) return 1;
    }
    return 0;
}

int main(){
 
    int n,m,k,i,j,check,qtd;
    int mat[9][9];
    
    scanf("%d",&qtd);
    
    for(k=1;k<=qtd;k++){
        for(i=0;i<9;i++){
            for(j=0;j<9;j++){
                scanf("%d",&mat[i][j]);
            }
        }
        check = 0;
        check += checa_linhas(mat);
        check += checa_colunas(mat);
        for(n=0;n<9;n+=3){
            for(m=0;m<9;m+=3){
                check += checa_mini_matrix(mat,n,m);
            }
        }
        if(check == 0){
            printf("Instancia %d\n",k);
            printf("SIM\n");
        }
        else{
            printf("Instancia %d\n",k);
            printf("NAO\n");
        }
        
        printf("\n");
    }
    return 0;
}
