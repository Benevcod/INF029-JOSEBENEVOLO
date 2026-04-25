#include <stdio.h>

int main() {

    int idade = 0; 
    int soma = 0;
    int idade1 = 0;

    for (int i = 0; i < 2; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade);
        soma += idade;

        if(i == 1){
            idade1 = idade;        
        }
       
    }
    
    printf("A idade da pessoa 1 é: %d\n", soma - idade1);
    printf("A idade da pessoa 2 é: %d\n", idade1);
    printf("A soma das idades é: %d\n", soma);

}