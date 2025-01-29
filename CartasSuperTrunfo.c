#include <stdio.h>

int main() {

    //Comecei pelas variáveis:

    char estado = "A"; //Usei o char (que indica apenas um caractere) para indicar o estado.
    char codigoc[10] = "A01"; //Usei o char "nome"[] (que indica uma cadeia de caracteres) para indicar o código da cidade.
    char nomecidade[50] = "Brasília"; //Usei novamente o char "nome"[] (que indica uma cadeia de caracteres) para indicar o nome da cidade.
    float populacao = 2.817; //Usei o float (que indica um número flutuante) para indicar a população, pois quando eu coloquei int (para número inteiro) eu não estava conseguindo interagir no scanf da área. População está em milhões.
    float area = 5779.14; //Usei o float (que indica um número flutuante) novamente para indicar a área da cidade em Km2.
    float pib = 328.8; //Usei mais uma vez o float (que indica um número flutuante) para indicar o PIB da cidade em bilhões de reais.
    int pturisticos = 32; //Usei o int (que indica números inteiros) para indicar o número de pontos turísticos.

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

    //Depois que o usuário respondeu através do terminal, eu uso novamente a função printf para imprimir os dados digitados pelo usuário:

    printf("\nEstado: %c \n", estado);
    printf("Código da cidade: %s \n", codigoc);
    printf("Nome da cidade: %s \n", nomecidade);
    printf("População da cidade: %.2f \n", populacao);
    printf("Área da cidade: %.2f \n", area);
    printf("Pib da cidade: %.2f \n", pib);
    printf("Número de pontos turísticos: %d \n \n", pturisticos);

    //E assim termina o cadastro das cartas, espero ter dado tudo que foi pedido nesse desafio!

    return 0;
}
