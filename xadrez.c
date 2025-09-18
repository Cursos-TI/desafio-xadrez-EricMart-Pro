#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//Usei a função void, que significa vazio ou que não tem um tipo, para armazenar um procedimento com nome de "moverTorre", no qual há uma variável criada entre parênteses do tipo int, a qual também está dentro do if para especificar a condição de que o valor da variável deve ser maior que 0 para se poder executar o bloco de código, ou seja, para mover a peça
//Usei printf para imprimir o movimento e para criar uma linha em branco
//Se o valor da variável for maior do que zero, o bloco de código será executado até que a condição se torne falsa, o que acontecerá por meio da recursividade, a qual irá reduzir o valor da variável em 1 após cada execução
//Todas essas etapas também estão especificadas para a peça da rainha

void moverTorre (int casas) {
    if(casas > 0) {

        printf("Direita\n");
        moverTorre (casas - 1);
        

    }
    printf("\n");
}

//Quando o procedimento referente à rainha for executado, o movimento para esquerda será repetido de acordo com o número que for especificado na chamada do procedimento
void moverRainha (int casas) {
    if(casas > 0) {
        printf("Esquerda\n");
        moverRainha (casas - 1);
        
    }
    printf("\n");
}


//Usei a mesma função void para a peça do bispo, porém, em vez de usar if, usei o loop for para criar loops aninhados, onde especifiquei a variavel referente ao eixo vertical e a variável do eixo horizontal, criei as condições de ser maior que zero para a execução dos blocos de código, e coloquei para decrementar cada variável após a execução
//Para cada execução do loop externo, haverá uma execução completa do loop interno.
//A variável do eixo vertical receberá seu valor na chamada de procedimento mais a frente.
//Já que para cada execução do loop externo, haverá uma execução completa do loop interno, então, ambos os movimentos "cima" e "direita" serão executados, nesse caso, o mesmo número de vezes, uma vez que, o valor da variável do eixo horizontal recebeu valor 1 ainda no loop interno e a condição para ambas as variáveis serem executadas é terem valor maior que zero
//Coloquei para imprimir os movimentos na mesma linha para repesentar o movimento na diagonal
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
   //Usei outro else-if para ativar a chamada de procedimento
    //Quando isso acontecer, o procedimento referente ao Bispo, criado antes do int main, vai ser executado com o valor 5 armazenado na variável do eixo vertical


    if(opcao == 1) { 
    moverBispo(5);

    // Implementação de Movimentação da Torre
    //Usei outro else-if para ativar a chamada de procedimento
    //Quando isso acontecer, o procedimento referente à rainha, criado antes do int mains, vai ser executado com o valor 5 armazenado na variável "casas"

} else if (opcao == 2) {

    moverTorre(5); 

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    //Usei outro else-if para ativar a chamada de procedimento
    //Quando isso acontecer, o procedimento referente à rainha, criado antes do int mains, vai ser executado com o valor 8 armazenado na variável "casas"
    
} else if(opcao == 3) {

    moverRainha(8);

// Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    //Se o usuário escolher a opção 4, o else-if dessa condição vai ser ativado
    //Criei variavéis internas do tipo int no loop for externo e interno, chamadas "casasVerticais" para representar o movimento vertical do cavalo e "casasHorizontais" para representar o movimento horizontal da peça
    //As variavéis vão armazenar valores inteiros
    //A variável do eixo vertical vai inicializar com valor 1 e irá ser incrementada em 1 depois da execução do bloco de código, até que as condições de ter que ser menor do que 3 e maior do que 0 para a execução do bloco de código se tornem falsas
    //Usei a função if e o código break para indicar que quando a variável do eixo vertical for igual a 2, o bloco de código do loop externo não seja mais executado, o que resultará em apenas 2 movimentos para cima e 1 movimento para Direita
    //Usei o loop for interno para inicializar a variável do eixo horizontal com valor igual a 1, criar as condições de ter que ser menor que 3 e maior do que 0, e para incrementar o valor da variável em 1 após cada execução até que as condições se tornem falsas
    //Usei a função if e o código continue para indicar que quando a variável do eixo horizontal for igual a 2, o bloco de código não seja executado nessa parte, o que resultará em apenas 2 movimentos para cima e 1 movimento para Direita, uma vez que para cada execução do loop externo, há uma execução completa do loop interno
    //Usei printf para exibir os movimentos e para colocar uma linha em branco após terminar o loop aninhado

}else if (opcao == 4) { 
   for(int casasVerticais = 1; casasVerticais < 3 && casasVerticais > 0; casasVerticais++) {

    if(casasVerticais == 2) break;

    for(int casasHorizontais = 1; casasHorizontais < 4 && casasHorizontais > 0; casasHorizontais++){

        if(casasHorizontais == 2) continue;

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
