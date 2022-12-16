/* AULA 2 - BEM VIDO AO JOGO DE ADIVINHAÇÂO*/

#include <stdio.h>

int main (){
    //imprime cabeçalho do jogo!
    printf("*********************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação!!! *\n");
    printf("*********************************************\n");

    int number_secret = 42;

    /*printf ("O número %d é o secreto. Não conta pra ninguém!\n", number_secret);*/

    int chute;

    printf("Qual é o seu chute? ");
    scanf("%d", &chute);
    printf("Seu chute foi: %d\n", chute);
}
