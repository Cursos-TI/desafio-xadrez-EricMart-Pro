#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moverTorre (int casas) {
    if(casas > 0) {

        printf("Direita\n");
        moverTorre (casas - 1);
        

    }
    printf("\n");
}

void moverRainha (int casas) {
    if(casas > 0) {
        printf("Esquerda\n");
        moverRainha (casas - 1);
        
    }
    printf("\n");
}

void moverBispo (int casasVerticais) {


       for(casasVerticais; casasVerticais > 0; casasVerticais--) {

            printf("Cima,");
            for(int casasHorizontais = 1; casasHorizontais > 0; casasHorizontais--) {
                printf(" Direita\n");
            }
            
       }

    printf("\n");

}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int opcao; //A variavel opcao vai armazenar um valor inteiro do menu que o usuário digitar
    //Criei variavés do tipo inteiro com o nome das peças e atribui como valor inicial o número 1
    int Bispo = 1;
    int Torre = 1;
    int Rainha = 1;
    int Cavalo = 1;

    printf("### Jogo de Xadrez ###\n"); //Utilizei printf para imprimir o menu com as opções de peças para mover e para solicitar a um número referente à opção ao usuário
    printf("Escolha qual peça deseja movimentar:\n");
    printf("1. Bispo\n");
    printf("2. Torre\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    printf("Digite o número correspondente a peça: ");
    scanf("%d", &opcao);// O scanf vai armazenar o valor que o usuário digitar na variável opcao

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    //O if vai ativar o while caso o valor digitado seja 1
    //O while vai repetir o printf enquanto o valor da variável Bispo for menor ou igual a 5
    //Utilizei o operador incremental para que a variável Bispo seja incrementa em 1 até que a condição da estrutura de repetição se torne falsa
    //Como o valor inicial do Bispo é 1, haverá 5 repetições, ou seja, 5 movimentos


    if(opcao == 1) { 
    moverBispo(5);
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    //Usei else-if para ativar o do-while caso a opção seja o número 2
    //O do vai imprimir o printf e incrementará o valor da Torre em 1 independente se a condição do while for verdadeira no começo, após isso, o bloco de código será executado novamente se a condição for verdadeira
    //A condição é que o valor da Torre deve ser menor ou igual à 5, o que vai resultar em 5 repetições devido ao valor inicial 1

} else if (opcao == 2) {

    moverTorre(5);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    //Usei outro else-if para ativar a estrutura de repetição for, caso a opção escolhida seja o número 3
    //Dentro do for está o valor inicial da Rainha, a condição e o incremento
    //A condição é que a variavél rainha deve ser menor ou igual à 8 para que o bloco de código seja executado, o que vai resultar em 8 execuções
} else if(opcao == 3) {

    moverRainha(8);

// Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    //Se o usuário escolher a opção 4, o else-if dessa condição vai ser ativado
    //Criei variavéis internas do tipo int no loop for externo e interno chamadas "casasVerticais" para representar o movimento vertical do cavalo e "casasHorizontais" para representar o movimento horizontal da peça
    //As variavéis vão armazenar valores inteiros
    //A variável do eixo vertical vai inicializar com valor zero e irá ser incrementada em 1 depois da execução do bloco de código , até que a condição de ter que ser menor do que 2 para a execução do bloco de código seja falsa
    //Usei a função if e o código break para indicar que quando a variável do eixo vertical for igual a 1, o bloco de código do loop externo não seja mais executado, o que resultará em apenas 2 movimentos para cima e 1 movimento para Direita
    //Usei o loop for interno para inicializar a variável do eixo horizontal com valor igual a 0, criar a condição de ter que ser menor que 3, e para incrementar o valor dela em 1 após cada execução até que a condição se torne falsa
    //Usei a função if e o código break para indicar que quando a variável do eixo horizontal for igual a 1, o bloco de código não seja executado nessa parte, o que resultará em apenas 2 movimentos para cima e 1 movimento para Direita, uma vez que para cada execução do loop externo, há uma execução completa do loop interno
    //Usei printf para exibir os movimentos e para colocar uma linha em branco após terminar o loop aninhado

}else if (opcao == 4) { 
   for(int casasVerticais = 0; casasVerticais < 2; casasVerticais++) {

    if(casasVerticais == 1) break;

    for(int casasHorizontais = 0; casasHorizontais < 3; casasHorizontais++){

        if(casasHorizontais == 1) continue;

        printf("Cima\n");

    }

    
    printf("Direita\n");

   }

   printf("\n");
    //Usei else para imprimir o printf de opção inválida, tente novamente caso o usuário digite um valor que o menu não contenha
} else {

    printf("Opção inválida. Tente Novamente!");
}

    
            

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
