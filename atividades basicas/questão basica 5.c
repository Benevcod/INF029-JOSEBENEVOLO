#include<stdio.h>

int main(){
    int verdade = 1;
    int idade;

    while(verdade = 1){

    int idade;

    printf("digite sua idade: ");

    scanf("%d",&idade);

    if (idade >= 18){
        printf("Voce e maior de idade\n");
    }
    else{
        printf("Voce e menor de idade\n");
        verdade = 0;
        break;
        }
    }
}