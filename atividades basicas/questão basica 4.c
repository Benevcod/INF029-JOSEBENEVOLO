#include <stdio.h>

 
 int main(){
    int a, b = 0;
    printf("qual o valor de a: ");
    scanf("%d",&a);

    printf("qual o valor de b: ");
    scanf("%d",&b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("o valor de a é: %d\n",a);
    printf("o valor de b é: %d\n",b);

}