#include<stdio.h>
 
 int main(){
    
    int x;
    int y;

    printf("Digite um valor para x: ");
    scanf("%d",&x);

    printf("Digite um valor para y: ");
    scanf("%d",&y); 

    int mult = x * y;

    printf("A multiplicação entre x e y é: %d \n", mult);
 }