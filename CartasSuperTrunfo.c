#include <stdio.h>

int main() {
    //Comecei pelas variáveis:

    char estado, estado2; //Usei o char (que indica apenas um caractere) para indicar o estado.
    char codigoc[10], codigoc2[10]; //Usei o char "nome"[] (que indica uma cadeia de caracteres) para indicar o código da cidade.
    char nomecidade[50], nomecidade2[50]; //Usei novamente o char "nome"[] (que indica uma cadeia de caracteres) para indicar o nome da cidade.
    float populacao, populacao2; //Usei o float (que indica um número flutuante) para indicar a população, pois quando eu coloquei int (para número inteiro) eu não estava conseguindo interagir no scanf da área. População está em milhões.
    float area, area2; //Usei o float (que indica um número flutuante) novamente para indicar a área da cidade em Km2.
    float pib, pib2; //Usei mais uma vez o float (que indica um número flutuante) para indicar o PIB da cidade em bilhões de reais.
    int pturisticos, pturisticos2; //Usei o int (que indica números inteiros) para indicar o número de pontos turísticos.
    float denspopul, denspopul2; //No nível intermediário eu acrescentei essa variável para poder calcular densidade populacional;
    float pibpercap, pibpercap2; //Aqui acrescentei essa variável para poder calcular o PIB per capita;
    long double todasprop, todasprop2; //Variável long float para comparar todas as propriedades.
    float comparacao, comparacao2; //variável float para fazer a comparação das cartas.

    //Variáveis prontas, agora começo a interagir com o usuário usando a combinação estudada "printf" e "scanf":

    printf("Digite o código do primeiro estado: \n"); //Com esse printf, irá aparecer no terminal o texto escrito.
    scanf(" %c", &estado); //Esse scanf permitirá que o usuário interaja com o programa através do terminal.

    printf("Digite o código da primeira cidade: \n"); //Com esse printf, irá aparecer no terminal o texto escrito.
    scanf(" %s", &codigoc); //Esse scanf permitirá que o usuário interaja com o programa através do terminal.

    printf("Digite o nome da primeira cidade: \n");  //Com esse printf, irá aparecer no terminal o texto escrito.
    scanf(" %s", &nomecidade); //Esse scanf permitirá que o usuário interaja com o programa através do terminal.

    printf("Digite a População da primeira cidade: \n"); //Com esse printf, irá aparecer no terminal o texto escrito.
    scanf(" %f", &populacao); //Esse scanf permitirá que o usuário interaja com o programa através do terminal.

    printf("Digite a área da primeira cidade: \n"); //Com esse printf, irá aparecer no terminal o texto escrito.
    scanf("  %f", &area); //Esse scanf permitirá que o usuário interaja com o programa através do terminal.

    printf("Digite o PIB da primeira cidade: \n"); //Com esse printf, irá aparecer no terminal o texto escrito.
    scanf("%f", &pib); //Esse scanf permitirá que o usuário interaja com o programa através do terminal.

    printf("Digite o número de pontos turísticos da primeira cidade: \n");  //Com esse printf, irá aparecer no terminal o texto escrito.
    scanf("%d", &pturisticos); //Esse scanf permitirá que o usuário interaja com o programa através do terminal.

    //Aqui eu repito o printf  e o scanf para os dados da segunda carta;

    printf("\nDigite o código do segundo estado: \n");
    scanf(" %c",  &estado2);

    printf("Digite o código da segunda cidade: \n");
    scanf(" %s", &codigoc2);

    printf("Digite o nome da segunda cidade: \n");
    scanf(" %s", &nomecidade2);

    printf("Digite a População da segunda cidade: \n");
    scanf(" %f", &populacao2);

    printf("Digite a área da segunda cidade: \n");
    scanf("  %f", &area2);

    printf("Digite o PIB da segunda cidade: \n");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos da segunda cidade: \n");
    scanf(" %d", &pturisticos2);

    //Depois que o usuário respondeu através do terminal, eu começo a desenvolver o nível intermediário, que consiste em usar os dados inseridos pelo usuário para calcular a densidade populacional e o PIB per capita;

    denspopul = (populacao / area); //Aqui usei a variável antes criada para poder dividir a população pela área e assim conseguir a "densidade populacional";
    pibpercap = (pib / populacao); //Aqui usei a variável antes criada para poder dividir o PIB pela população e assim conseguir o "PIB per capita";

    //Aqui eu calculo a densidade populacional e o PIb per capita da segunda carta;

    denspopul2 = (populacao2 / area2);
    pibpercap2 = (pib2 / populacao2);

    //aqui eu somo todas as propriedades das duas cartas para depois compará-las;

    todasprop = (populacao + area + pib + pturisticos + denspopul + pibpercap); // Aqui eu somo todas as propriedades para poder fazer a comparação
    todasprop2 = (populacao2 + area2 + pib2 + pturisticos2 + denspopul2 + pibpercap2); 

    comparacao = (denspopul > denspopul2); // Aqui eu comparo a densidade populacional das duas cartas
    comparacao2 = (todasprop > todasprop2); // Aqui eu comparo todas as propriedades das duas cartas

    //Aqui eu imprimo todos os dados das duas cartas;

    printf("***Primeira carta***\n");

    printf("\nEstado: %c \n", estado);
    printf("Código da cidade: %s \n", codigoc);
    printf("Nome da cidade: %s \n", nomecidade);
    printf("População da cidade: %.2f milhões de habitantes \n", populacao);
    printf("Densidade populacoinal: %.2f por Km2 \n", denspopul); //Imprime a densidade populacional;
    printf("Área da cidade: %.3f Km2 \n", area);
    printf("Pib da cidade: %.1f bilhões de reais \n", pib);
    printf("PIB per capita: %.2f \n", pibpercap); //Imprime o pib per capita;
    printf("Número de pontos turísticos: %d \n \n", pturisticos);

    printf("***Segunda carta***\n");

    printf("\nEstado: %c \n", estado2);
    printf("Código da cidade: %s \n", codigoc2);
    printf("Nome da cidade: %s \n", nomecidade2);
    printf("População da cidade: %.2f milhões de habitantes \n", populacao2);
    printf("Densidade populacoinal: %.2f por Km2 \n", denspopul2); //Imprime a densidade populacional;
    printf("Área da cidade: %.3f Km2 \n", area2);
    printf("Pib da cidade: %.1f bilhões de reais \n", pib2);
    printf("PIB per capita: %.2f \n", pibpercap2); //Imprime o pib per capita;
    printf("Número de pontos turísticos: %d \n \n", pturisticos2);

    //E por fim, eu imprimo a comparação entre as duas cartas e o resultado final do jogo

    printf("Para primeira carta vencedora = 0;\npara segunda carta vencedora = 1;\n\n\n");//Os primeiros dados inseridos é considerada a primeira carta, já os segundos dados inseridos é considerado a segunda carta, portanto, se a primeira carta, ganhar o número será = 0. Naturalmente, se a segunda carta ganhar, o número será = 1;

    printf("Primeira etapa: **%.0f**\n\n", comparacao);//Primeira comparação para saber quem tem a menor densidade populacional (a carta com menor densidade populacional ganha essa etapa);

    printf("Carta vencedora: ***%.0f***\n\n", comparacao2);// Segunda e última comparação para saber qual carta é a vencedora, o comando imprime a comparação antes feita com todas as propriedades;

    //E assim termina o cadastro das cartas, o acrescento das propriedades calculadas para calcular a densidade populacional e o PIB per capita e a comparação entre as cartas comparando a densidade populacional e as demais propriedades para decidir a carta vencedora. Espero ter dado tudo que foi pedido nesse desafio!


}