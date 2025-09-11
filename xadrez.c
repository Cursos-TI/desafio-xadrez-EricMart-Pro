#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int opcao; //A variavel opcao vai armazenar um valor inteiro do menu que o usuário digitar
    //Criei variavés do tipo inteiro com o nome das peças e atribui como valor inicial o número 1
    int Bispo = 1;
    int Torre = 1;
    int Rainha = 1;

    printf("### Jogo de Xadrez ###\n"); //Utilizei printf para imprimir o menu com as opções de peças para mover e para solicitar a um número referente à opção ao usuário
    printf("Escolha qual peça deseja movimentar:\n");
    printf("1. Bispo\n");
    printf("2. Torre\n");
    printf("3. Rainha\n");
    printf("Digite o número correspondente a peça: ");
    scanf("%d", &opcao);// O scanf vai armazenar o valor que o usuário digitar na variável opcao

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    //O if vai ativar o while caso o valor digitado seja 1
    //O while vai repetir o printf enquanto o valor da variável Bispo for menor ou igual a 5
    //Utilizei o operador incremental para que a variável Bispo seja incrementa em 1 até que a condição da estrutura de repetição se torne falsa
    //Como o valor inicial do Bispo é 1, haverá 5 repetições, ou seja, 5 movimentos


    if(opcao == 1) { 
    while (Bispo <= 5) { 

        
        printf("Cima, Direita\n");
        Bispo++; 

    }
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    //Usei else-if para ativar o do-while caso a opção seja o número 2
    //O do vai imprimir o printf e incrementará o valor da Torre em 1 independente se a condição do while for verdadeira no começo, após isso, o bloco de código será executado novamente se a condição for verdadeira
    //A condição é que o valor da Torre deve ser menor ou igual à 5, o que vai resultar em 5 repetições devido ao valor inicial 1

} else if (opcao == 2) {

    do{
        
        printf("Direita\n");
        Torre++;
        
    }while (Torre <= 5);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    //Usei outro else-if para ativar a estrutura de repetição for, caso a opção escolhida seja o número 3
    //Dentro do for está o valor inicial da Rainha, a condição e o incremento
    //A condição é que a variavél rainha deve ser menor ou igual à 8 para que o bloco de código seja executado, o que vai resultar em 8 execuções
} else if(opcao == 3) {

    for(Rainha = 1; Rainha <= 8; Rainha++) {
        printf("Esquerda\n");
    }
}

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
