#include<stdio.h>

int main(){

    char cadastro[3][50];
    printf("digite suas informações de cadastro\n");

    for(int i=0; i<3; i++){
        if (i==0){
            printf("nome: ");
        } else if (i==1){
            printf("matricula: ");
        } else {
            printf("semestre de admissão: ");
        }
        
        fgets(cadastro[i], 50, stdin);
    }

    for(int i=0; i<3; i++){
        if (i==0){
            printf("nome: %s", cadastro[i]);
        } else if (i==1){
            printf("matricula: %s", cadastro[i]);
        } else {
            printf("semestre de admissão: %s", cadastro[i]);
        }
    }
}