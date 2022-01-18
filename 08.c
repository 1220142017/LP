#include <stdio.h>
#include <stdlib.h>

int checa_linhas(char mat[9][9]){
    int i,j,letra,check;

    for(i=0;i<9;i++){
        for(letra=65;letra<=73;letra++){
            check = 0;
            for(j=0;j<9;j++){
                if(letra == (int)mat[i][j]){
                    check++;
                }
            }
            if(check != 1){
                return 1;
            }
        }
    }

    return 0;
}

int checa_colunas(char mat[9][9]){
    int i,j,letra,check;

    for(i=0;i<9;i++){
        for(letra=65;letra<=73;letra++){
            check = 0;
            for(j=0;j<9;j++){
                if(letra == (int)mat[j][i]){
                    check++;
                }
            }
            if(check != 1){
                return 1;
            }
        }
    }

    return 0;
}
int checa_mini_matrix(char mat[9][9],int n,int m){
    int i,j,k,num,check;
    
    for(num=65;num<=73;num++){
        check = 0;
        for(i=n;i<n+3;i++){
            for(j=m;j<m+3;j++){
                if((int)mat[i][j] == num){
                    check++;
                }
            }
        }
        if(check>1){
            return 1;    
        } 
    }
    return 0;
}

int main(){
 
    int n,m,k,i,j,check,qtd;
    char mat[9][9];
    
    scanf("%d ",&qtd);
    
    for(k=1;k<=qtd;k++){
        for(i=0;i<9;i++){
            for(j=0;j<9;j++){
                scanf("%c ",&mat[i][j]);
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
