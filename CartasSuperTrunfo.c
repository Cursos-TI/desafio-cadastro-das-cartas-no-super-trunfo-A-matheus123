#include <stdio.h>

int main() {
    
//Comecei pelas variáveis:

    char estado; //Usei o char (que indica apenas um caractere) para indicar o estado.
    char codigoc[10]; //Usei o char "nome"[] (que indica uma cadeia de caracteres) para indicar o código da cidade.
    char nomecidade[50]; //Usei novamente o char "nome"[] (que indica uma cadeia de caracteres) para indicar o nome da cidade.
    float populacao; //Usei o float (que indica um número flutuante) para indicar a população, pois quando eu coloquei int (para número inteiro) eu não estava conseguindo interagir no scanf da área. População está em milhões.
    float area; //Usei o float (que indica um número flutuante) novamente para indicar a área da cidade em Km2.
    float pib; //Usei mais uma vez o float (que indica um número flutuante) para indicar o PIB da cidade em bilhões de reais.
    int pturisticos; //Usei o int (que indica números inteiros) para indicar o número de pontos turísticos.
    float denspopul; //No nível intermediário eu acrescentei essa variável para poder calcular densidade populacional;
    float pibpercap; //Aqui acrescentei essa variável para poder calcular o PIB per capita;

    //Variáveis prontas, agora começo a interagir com o usuário usando a combinação estudada "printf" e "scanf":

    printf("Digite o código do estado: \n"); //Com esse printf, irá aparecer no terminal o texto escrito.
    scanf("%c", &estado); //Esse scanf permitirá que o usuário interaja com o programa através do terminal.

    printf("Digite o código da cidade: \n"); //Com esse printf, irá aparecer no terminal o texto escrito.
    scanf("%s", &codigoc); //Esse scanf permitirá que o usuário interaja com o programa através do terminal.

    printf("Digite o nome da cidade: \n");  //Com esse printf, irá aparecer no terminal o texto escrito.
    scanf("%s", &nomecidade); //Esse scanf permitirá que o usuário interaja com o programa através do terminal.

    printf("Digite a População da cidade: \n"); //Com esse printf, irá aparecer no terminal o texto escrito.
    scanf("%f", &populacao); //Esse scanf permitirá que o usuário interaja com o programa através do terminal.

    printf("Digite a área da cidade: \n"); //Com esse printf, irá aparecer no terminal o texto escrito.
    scanf("  %f", &area); //Esse scanf permitirá que o usuário interaja com o programa através do terminal.

    printf("Digite o PIB da cidade: \n"); //Com esse printf, irá aparecer no terminal o texto escrito.
    scanf("%f", &pib); //Esse scanf permitirá que o usuário interaja com o programa através do terminal.

    printf("Digite o número de pontos turísticos: \n");  //Com esse printf, irá aparecer no terminal o texto escrito.
    scanf("%d", &pturisticos); //Esse scanf permitirá que o usuário interaja com o programa através do terminal.

    //Depois que o usuário respondeu através do terminal, eu começo a desenvolver o nível intermediário, que consiste em usar os dados inseridos pelo usuário para calcular a densidade populacional e o PIB per capita;

    denspopul = (populacao / area); //Aqui usei a variável antes criada para poder dividir a população pela área e assim conseguir a "densidade populacional";
    pibpercap = (pib / populacao); //Aqui usei a variável antes criada para poder dividir o PIB pela população e assim conseguir o "PIB per capita";

    printf("\nEstado: %c \n", estado);
    printf("Código da cidade: %s \n", codigoc);
    printf("Nome da cidade: %s \n", nomecidade);
    printf("População da cidade: %.2f milhões de habitantes \n", populacao);
    printf("Densidade populacoinal: %.2f por Km2 \n", denspopul); //Imprime a densidade populacional;
    printf("Área da cidade: %.2f Km2 \n", area);
    printf("Pib da cidade: %.1f bilhões de reais \n", pib);
    printf("PIB per capita: %.2f \n", pibpercap); //Imprime o pib per capita;
    printf("Número de pontos turísticos: %d \n \n", pturisticos);

    //E assim termina o cadastro das cartas (nível novato), e o acrescento das variáveis para calcular a densidade populacional e o PIB per capita. Espero ter dado tudo que foi pedido nesse desafio!

    return 0;
}
