#include <stdio.h>

int main() {

    char estado = 'A', estado2 = 'B'; //Usei o char (que indica apenas um caractere) para indicar o estado;
    char nomeestado[50] = "Distrito Federal", nomeestado2[50] = "São Paulo";
    char codigoc[20] = "A01", codigoc2[20] = "B01"; //Usei o char "nome"[] (que indica uma cadeia de caracteres) para indicar o código da cidade;
    char nomecidade[50] = "Brasília", nomecidade2[50] = "São Paulo"; //Usei novamente o char "nome"[] (que indica uma cadeia de caracteres) para indicar o nome da cidade;
    float populacao = 2.817, populacao2 = 12.325; //Usei o float (que indica um número flutuante) para indicar a população, pois quando eu coloquei int (para número inteiro) eu não estava conseguindo interagir no scanf da área. População está em milhões;
    float area = 5.779, area2 = 15.211; //Usei o float (que indica um número flutuante) novamente para indicar a área da cidade em Km2;
    float pib = 328.8, pib2 = 699.2; //Usei mais uma vez o float (que indica um número flutuante) para indicar o PIB da cidade em bilhões de reais;
    int pturisticos = 32, pturisticos2 = 50; //Usei o int (que indica números inteiros) para indicar o número de pontos turísticos;
    float denspopul, denspopul2; //No nível intermediário eu acrescentei essa variável para poder calcular densidade populacional;
    float pibpercap, pibpercap2; //Aqui acrescentei essa variável para poder calcular o PIB per capita;
    long double todasprop, todasprop2; //Variável long float para comparar todas as propriedades;
    float comparacao, comparacao2;


    denspopul = (populacao / area); //Densidade baseada na população dividida pela área;
    pibpercap = (pib / populacao); //PIB per capita baseada no PIb dividido pela população;

    denspopul2 = (populacao2 / area2); //Densidade baseada na população dividida pela area;
    pibpercap2 = (pib2 / populacao2); //PIB per capita baseada no PIb dividido pela população;

    todasprop = (populacao + area + pib + pturisticos + denspopul + pibpercap); //Soma de todas as propriedades;
    todasprop2 = (populacao2 + area2 + pib2 + pturisticos2 + denspopul2 + pibpercap2);  //Soma de todas as propriedades;


    printf("Digite o código da primeira cidade:\n");//Pede para o usuário inserir o código da primeira cidade;
    scanf("%s", &codigoc);//Usuário insere o código da primeira cidade (A01);

    printf("Digite o código da segunda cidade:\n");//Pede para o usuário inserir o código da segunda cidade;
    scanf("%s", &codigoc2);//Usuário insere o código da primeira cidade;


    printf("\nPrimeira carta:\n"); //Imprime "Primeira carta";

    printf("Estado: %c\n", estado);//Imprime o código do estado;
    printf("Nome do estado: %s\n", nomeestado);//Imprime o nome do estado;
    printf("Código da cidade: %s\n", codigoc);//Imprime o código da cidade;
    printf("Nome da cidade: %s\n", nomecidade);//Imprime o nome da cidade;
    printf("População da cidade: %.2f milhões de habitantes\n", populacao);//Imprime a população da cidade;
    printf("Densidade populacoinal: %.2f pessoas por Km2\n", denspopul); //Imprime a densidade populacional;
    printf("Área da cidade: %.2f Km2\n", area);//Imprime a área da cidade;
    printf("Pib da cidade: %.1f bilhões de reais\n", pib);//Imprime o PIB da cidade;
    printf("PIB per capita: %.2f\n", pibpercap); //Imprime o pib per capita;
    printf("Número de pontos turísticos: %d\n\n", pturisticos);//Imprime o número de pontos turísticos;

    printf("Segunda carta\n");//Imprime "Segunda carta"

    printf("Estado: %c\n", estado2);//Imprime o código do segundo estado;
    printf("Nome do estado: %s\n", nomeestado2);//Imprime o nome do segundo estado;
    printf("Código da cidade: %s\n", codigoc2);//Imprime o nome da segunda cidade;
    printf("Nome da cidade: %s\n", nomecidade2);//Imprime o nome da segunda cidade;
    printf("População da cidade: %.2f milhões de habitantes\n", populacao2);//Imprime a população da segunda cidade;
    printf("Densidade populacoinal: %.2f pessoas por Km2\n", denspopul2); //Imprime a densidade populacional;
    printf("Área da cidade: %.2f Km2\n", area2);//Imprime a área da segunda cidade;
    printf("Pib da cidade: %.1f bilhões de reais\n", pib2);//Imprime o PIB da segunda cidade;
    printf("PIB per capita: %.2f\n", pibpercap2); //Imprime o pib per capita;
    printf("Número de pontos turísticos: %d\n\n", pturisticos2);//Imprime o número de pontos turísticos;



    printf("\n*Carta com menor densidade populacional:*\n");//Imprime "*Carta com menor densidade populacional:*";
    if (denspopul < denspopul2){
        printf("Primeira carta!\n\n");
    }else {
        printf("Segunda carta!\n\n");
    }//Aqui eu usei o "if- else" para imprimir o printf caso seja verdadeiro(Primeira carta vencedora) ou falso(Segunda carta vencedora);

    printf("*Carta vencedora:*\n\n");//Imprime "*Carta vencedora:*"
    if (todasprop > todasprop2){
        printf("***Primeira carta ganhou!!!***\n\n");
    }else {
        printf("***Segunda carta ganhou!!!***\n\n");
    }//Aqui usei o "if- else" para imprimir o printf caso seja verdadeiro(Primeira carta ganhou!!!) ou falso(Segunda carta ganhou!!!);


}