/* AULA 2 - BEM VIDO AO JOGO DE ADIVINHAÇÂO*/

#include <stdio.h> // Inclui o pacote de input e output padrão

// cria uma função principal
int main (){

    // imprimindo o cabeçalho do jogo:
    printf("*********************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação!!! *\n");
    printf("*********************************************\n");

    int number_secret = 42; // Atribui um valor para o número secreto
    
    // Printa o número secreto
    /*printf ("O número %d é o secreto. Não conta pra ninguém!\n", number_secret);*/

    int chute; // Cria uma variavel (chute)
    
    printf("Qual é o seu chute? "); // Printa mensagem na tela
    scanf("%d", &chute); // Atribui o valor digitado pelo usuario para veriavel chute
    printf("Seu chute foi: %d\n", chute); // printa o valor atribuido para variavel chute

    int acertou = (chute == number_secret);

    if (acertou)
    {
        printf("Parabéns! Você acertou!\n");
        printf("Jogue de novo meu vidente, hoje é o seu dia de sorte!\n");
    }
    else {

        int maior = (chute > number_secret); 
        if (maior)
        {
            printf("Essa foi por pouco, seu chute foi maior que o número secreto.\n");
        } else {
            printf("Essa foi por pouco, seu chute foi menor que o número secreto.\n");
        }
        
        //printf("Você errou!\n");
        printf("Mas não desanime, tende de novo!\n");
    }
}
